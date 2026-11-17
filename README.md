# Operating Systems Lab

> A comprehensive laboratory portfolio of 10 Operating Systems experiments — covering Linux system administration, shell scripting, pattern stream editing with `sed`, memory management, CPU/IO profiling, and POSIX process lifecycle control.

![Experiments](https://img.shields.io/badge/Experiments-10%20%2F%2010-blue)
![Language](https://img.shields.io/badge/Language-C%20%7C%20Bash-green)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey)

---

## Student Details

- **Name:** Rudra Pratap
- **GitHub:** [@RudraPratap01](https://github.com/RudraPratap01)
- **Repository:** [operating_system_lab](https://github.com/RudraPratap01/operating_system_lab)
- **Course:** Operating Systems Laboratory
- **Roll Number:** *(Fill in Roll Number)*
- **College / Department:** *(Fill in College / University)*

---

## Overview

This repository contains practical implementations and verified execution results for 10 Operating Systems laboratory assignments. The experiments are organized in sequence directly at the root level, from `Experiment 01` to `Experiment 10`.

Each experiment folder is self-contained with:
- An experiment-specific **`README.md`** describing the theoretical background, syntax, and commands.
- Clean **source code** (`.sh` shell scripts and `.c` programs).
- Verified execution **`output.txt`** traces and terminal screenshots where applicable.

---

## Experiments Index

| # | Experiment Name | Core Topics & System Calls | Files | Link |
|:---:|:---|:---|:---|:---:|
| **01** | Linux System Administration & Process Management | Filesystem navigation, system status, `ps`, `kill`, `nice`, `top` | `*.png`, `README.md` | [Experiment 01](./Experiment%2001/) |
| **02** | Shell Redirection & Stream Editing with `sed` | `>`, `>>`, `2>`, line range printing (`p`), deletion (`d`), regex substitution (`s`) | `*.png`, `README.md` | [Experiment 02](./Experiment%2002/) |
| **03** | Bash Scripting: Conditionals & Loops | Positional parameters (`$#`, `$@`), `for` loop, file test operators (`-f`, `-d`) | `check_type.sh`, `output.txt` | [Experiment 03](./Experiment%2003/) |
| **04** | User Session Tracking & Text Processing | `w`, `awk`, epoch timestamp calculations (`date +%s`), in-place deletion (`sed -i`) | `working_users.sh`, `line_range.sh`, `delete_word.sh` | [Experiment 04](./Experiment%2004/) |
| **05** | String Operations in Shell Script & C | Bash parameter expansion (`${#str}`, `${str:start:len}`), C character arrays | `string_ops.sh`, `string_ops.c`, `output.txt` | [Experiment 05](./Experiment%2005/) |
| **06** | Memory Allocation & Demand Paging in C | Dynamic heap allocation (`malloc`), 4 KB page touching, `free -h` | `memory.c`, `output.txt` | [Experiment 06](./Experiment%2006/) |
| **07** | CPU-Bound vs I/O-Bound C Programs | CPU compute loop vs disk writes + sleep, process states (`R` vs `S`), `top` | `cpu_bound.c`, `io_bound.c`, `output.txt` | [Experiment 07](./Experiment%2007/) |
| **08** | Observing Process Memory Maps Using `pmap` | Virtual memory segments, page modes (`r-x`, `rw-`), shared libraries (`libc`) | `pmap_demo.sh`, `output.txt` | [Experiment 08](./Experiment%2008/) |
| **09** | Process Creation & Synchronization in C | `fork()`, `getpid()`, `wait()`, parent-child lifecycle and exit handling | `fork_wait.c`, `output.txt` | [Experiment 09](./Experiment%2009/) |
| **10** | Observing Virtual Memory Addresses & ASLR | Virtual stack addresses (`%p`), Address Space Layout Randomization, `setarch -R` | `virtual_addr.c`, `output.txt` | [Experiment 10](./Experiment%2010/) |

---

## Repository Structure

```text
operating_system_lab/
├── Experiment 01/
│   ├── experiment-1-1-jobs-and-kill.png
│   ├── experiment-1-2-ps-process-list.png
│   ├── experiment-1-3-command-history.png
│   ├── experiment-1-4-ls-and-tree.png
│   └── README.md
├── Experiment 02/
│   ├── experiment-2-1-date-and-sed-print.png
│   ├── experiment-2-2-sed-delete-and-substitute.png
│   └── README.md
├── Experiment 03/
│   ├── check_type.sh
│   ├── output.txt
│   └── README.md
├── Experiment 04/
│   ├── working_users.sh
│   ├── line_range.sh
│   ├── delete_word.sh
│   ├── output.txt
│   └── README.md
├── Experiment 05/
│   ├── string_ops.sh
│   ├── string_ops.c
│   ├── output.txt
│   └── README.md
├── Experiment 06/
│   ├── memory.c
│   ├── output.txt
│   └── README.md
├── Experiment 07/
│   ├── cpu_bound.c
│   ├── io_bound.c
│   ├── output.txt
│   └── README.md
├── Experiment 08/
│   ├── pmap_demo.sh
│   ├── output.txt
│   └── README.md
├── Experiment 09/
│   ├── fork_wait.c
│   ├── output.txt
│   └── README.md
├── Experiment 10/
│   ├── virtual_addr.c
│   ├── output.txt
│   └── README.md
├── .gitignore
└── README.md
```

---

## Getting Started

### Prerequisites

- A Linux environment (Ubuntu, Debian, or WSL2)
- Compilers & tools: `gcc`, `bash`, `procps` (`ps`, `top`, `pmap`), `sed`, `gawk`

### Running Shell Scripts

```bash
# Navigate to experiment directory
cd "Experiment 03"
chmod +x check_type.sh
./check_type.sh /etc/passwd /var/log /nonexistent
```

### Compiling and Executing C Programs

```bash
# Navigate to experiment directory
cd "Experiment 09"
gcc -Wall -Wextra fork_wait.c -o fork_wait
./fork_wait
```

---

## References & Acknowledgements

- Adapted with reference from [Divyashish Singh's Operating System Codes](https://github.com/divyashishsingh211-max/Operating_System_Codes) and Harshit Singh Jamwal's Operating System Lab repository.
