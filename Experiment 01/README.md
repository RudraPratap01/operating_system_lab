# Experiment 01 — Linux System Administration & Process Management

> **Submitted by:** Rudra Pratap  

---

### Objective
To explore and practice fundamental Linux shell commands for directory navigation, file operations, system inspection, and process management.

---

### 1. File & Directory Navigation Commands

| Command | Syntax / Usage | Practical Role |
| :--- | :--- | :--- |
| `pwd` | `pwd` | Displays the absolute path of the current working directory. |
| `ls` | `ls -la` | Lists all files and folders, including hidden files with detailed metadata. |
| `tree` | `tree [dir]` | Renders directory hierarchy in an intuitive visual tree layout. |
| `cd` | `cd [path]` | Navigates between system directories. |
| `mkdir` | `mkdir [name]` | Creates new directories. |
| `touch` | `touch [file]` | Generates an empty file or refreshes timestamp metadata. |
| `cat` | `cat [file]` | Concatenates and prints file contents directly to standard output. |
| `echo` | `echo [text]` | Outputs text strings or writes content to files via redirection. |
| `clear` | `clear` | Clears terminal screen output. |
| `history` | `history` | Displays list of recently executed shell commands. |

---

### 2. Process Management & Job Control

| Command | Syntax / Usage | Practical Role |
| :--- | :--- | :--- |
| `sleep` | `sleep <seconds>` | Delays command execution for a specified interval. |
| `jobs` | `jobs -l` | Lists active background or stopped jobs in the current shell session. |
| `ps` | `ps aux` / `ps -ef` | Reports snapshot of all active processes and their resource states. |
| `ps -o` | `ps -o pid,ni,cmd` | Displays custom formatted columns (Process ID, Nice value, Command). |
| `kill` | `kill -9 <PID>` | Transmits termination signals to processes by PID or job identifier. |

---

### Terminal Execution Output

All commands were executed in a Linux terminal environment. Refer to [`output.txt`](./output.txt) for the complete verified terminal session trace:

```text
$ pwd
/home/rudra/operating_system_lab/Experiment 01

$ whoami
rudra

$ sleep 300 &
[1] 18420

$ jobs -l
[1]- 18420 Running                 sleep 300 &

$ ps -o pid,ppid,ni,comm
    PID    PPID  NI COMMAND
  16200   16190   0 bash
  18420   16200   0 sleep
  18425   16200   0 ps

$ kill -9 18420
[1]-  Killed                  sleep 300
```

---

### Conclusion
Demonstrated essential Linux command-line utilities for managing file systems, monitoring processes, and controlling system execution flow.
