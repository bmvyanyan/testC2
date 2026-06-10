/// CStesthihi
let terminate_action  = menu.create_action("Terminate",  function(value) { value.forEach(v => ax.execute_command(v, "terminate")) });

menu.add_session_agent(terminate_action, ["CStesthihi"])


let task_get_action = menu.create_action("Get task output", function(tasks_list) {
    tasks_list.forEach((task) => {
        if(task.state == "Running") {
            ax.execute_command(task.agent_id, "jobs get " + task.task_id);
        }
    });
});
menu.add_tasks(task_get_action, ["CStesthihi"])

let task_stop_action = menu.create_action("Stop task", function(tasks_list) {
    tasks_list.forEach((task) => {
        if(task.state == "Running") {
            ax.execute_command(task.agent_id, "jobs kill " + task.task_id);
        }
    });
});
menu.add_tasks(task_stop_action, ["CStesthihi"])



function RegisterCommands(listenerType)
{
/// Commands Here

    let cmd_pwd = ax.create_command("pwd", "Print working directory", "pwd", "Task: print working directory");
    let cmd_cd = ax.create_command("cd", "Change directory", "cd /etc", "Task: change directory");
    cmd_cd.addArgString("path", true, "Target directory path");

    let cmd_download = ax.create_command("download", "Download files", "download /path/file.txt", "Task: download");
    cmd_download.addArgString("file", true);

    if(listenerType == "CStesthihiHTTP") {
        let commands_external = ax.create_commands_group("CStesthihi", [cmd_pwd, cmd_cd, cmd_download]);

        return { commands_linux: commands_external }
    }
    return ax.create_commands_group("none",[]);
}

function GenerateUI(listenerType)
{
    let container = form.create_container()

    let panel = form.create_panel()

    return {
        ui_panel: panel,
        ui_container: container
    }
}
