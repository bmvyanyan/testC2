#!/usr/bin/env python3

"""
Non-operational placeholder payload template.

This file is kept syntactically valid so the extender can package it without
build-time errors, but it intentionally does not implement any network or
command-execution behavior.
"""

import json
import os
import sys
import time

callback_host = "<CALLBACK_HOST>"
callback_port = "<CALLBACK_PORT>"
callback_path = "<CALLBACK_PATH>"
agent_watermark = "<WATERMARK>"


def main() -> int:
    payload_info = {
        "status": "disabled",
        "watermark": agent_watermark,
        "callback_host": callback_host,
        "callback_port": callback_port,
        "callback_path": callback_path,
        "pid": os.getpid(),
        "timestamp": int(time.time()),
    }
    sys.stdout.write(json.dumps(payload_info, sort_keys=True) + "\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
