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

### Verified Screenshots

- **Background Jobs & Kill:** [experiment-1-1-jobs-and-kill.png](./experiment-1-1-jobs-and-kill.png)
- **Process Status via `ps`:** [experiment-1-2-ps-process-list.png](./experiment-1-2-ps-process-list.png)
- **Command History:** [experiment-1-3-command-history.png](./experiment-1-3-command-history.png)
- **Directory Tree & Listing:** [experiment-1-4-ls-and-tree.png](./experiment-1-4-ls-and-tree.png)

---

### Conclusion
Demonstrated essential Linux command-line utilities for managing file systems, monitoring processes, and controlling system execution flow.
