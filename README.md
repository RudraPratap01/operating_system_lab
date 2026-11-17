# Operating Systems Lab

> A complete and structured collection of 10 Operating Systems laboratory experiments — Bash scripts, C programs, verified outputs, and concise documentation.

![Experiments](https://img.shields.io/badge/Experiments-10%20%2F%2010-blue)
![Language](https://img.shields.io/badge/Language-C%20%7C%20Bash-green)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey)

---

## Overview

This repository contains all 10 Operating Systems lab experiments arranged sequentially in root folders from `exp1` to `exp10`. Each experiment folder contains:

- A concise **`README.md`** explaining the aim, core concepts, how to run, and summary.
- Clean **source code** (`.sh` shell scripts and `.c` programs).
- Verified sample execution **`output.txt`**.

The experiments cover Linux systems administration, process management, shell scripting, pattern manipulation with `sed`, user session tracking, string operations, memory allocation and demand paging, CPU vs I/O bound analysis, process memory maps (`pmap`), process creation/synchronization (`fork`, `wait`), and virtual memory address spaces.

---

## Experiments Index

| # | Experiment | Key Topics | Files | Folder |
|---|---|---|---|---|
| **01** | Linux System Administration & Process Management | File inspection, system status, processes, numeric test | `system_commands.sh`, `check_zero.sh`, `output.txt` | [exp1/](./exp1/) |
| **02** | Shell Redirection & `sed` Stream Editor | `>`, `>>`, `sed` print (`p`), delete (`d`), substitute (`s`) | `sed_demo.sh`, `output.txt` | [exp2/](./exp2/) |
| **03** | Bash Scripting: Conditionals, Loops & File Tests | `$#`, `$@`, `for`, `if-elif`, `-f`, `-d`, `tr`, `mv` | `check_type.sh`, `rename_upper.sh`, `output.txt` | [exp3/](./exp3/) |
| **04** | User Session Tracking & Text Processing | `w`, `awk`, `date` epoch calculation, `sed -n`, `sed -i` | `working_users.sh`, `line_range.sh`, `delete_word.sh`, `output.txt` | [exp4/](./exp4/) |
| **05** | String Operations in Shell Script & C | `${#str}`, `${str:start:len}`, C character arrays, `fgets` | `string_ops.sh`, `string_ops.c`, `output.txt` | [exp5/](./exp5/) |
| **06** | Memory Allocation & Virtual Memory in C | Dynamic memory (`malloc`), 4 KB page touching, `free -h` | `memory.c`, `output.txt` | [exp6/](./exp6/) |
| **07** | CPU-Bound vs I/O-Bound C Programs | Compute loop vs file I/O + sleep, `top`, `%CPU`, states (`R`/`S`) | `cpu_bound.c`, `io_bound.c`, `output.txt` | [exp7/](./exp7/) |
| **08** | Observing Process Memory Maps Using `pmap` | Virtual memory segments, permissions, RSS, shared libraries | `pmap_demo.sh`, `output.txt` | [exp8/](./exp8/) |
| **09** | Process Creation & Synchronization in C | `fork()`, `getpid()`, `wait()`, parent-child lifecycle | `fork_wait.c`, `output.txt` | [exp9/](./exp9/) |
| **10** | Observing Virtual Memory Addresses & ASLR in C | Stack addresses (`%p`), ASLR randomization, `setarch -R` | `virtual_addr.c`, `output.txt` | [exp10/](./exp10/) |

---

## Repository Structure

```text
operating_system_lab/
├── exp1/
│   ├── system_commands.sh
│   ├── check_zero.sh
│   ├── output.txt
│   └── README.md
├── exp2/
│   ├── sed_demo.sh
│   ├── output.txt
│   └── README.md
├── exp3/
│   ├── check_type.sh
│   ├── rename_upper.sh
│   ├── output.txt
│   └── README.md
├── exp4/
│   ├── working_users.sh
│   ├── line_range.sh
│   ├── delete_word.sh
│   ├── output.txt
│   └── README.md
├── exp5/
│   ├── string_ops.sh
│   ├── string_ops.c
│   ├── output.txt
│   └── README.md
├── exp6/
│   ├── memory.c
│   ├── output.txt
│   └── README.md
├── exp7/
│   ├── cpu_bound.c
│   ├── io_bound.c
│   ├── output.txt
│   └── README.md
├── exp8/
│   ├── pmap_demo.sh
│   ├── output.txt
│   └── README.md
├── exp9/
│   ├── fork_wait.c
│   ├── output.txt
│   └── README.md
├── exp10/
│   ├── virtual_addr.c
│   ├── output.txt
│   └── README.md
├── .gitignore
└── README.md
```

---

## Getting Started

### Prerequisites

- A Linux environment (Ubuntu / Debian / WSL)
- Standard tools: `bash`, `gcc`, `procps` (`ps`, `top`, `pmap`), `sed`, `awk`

### Clone the Repository

```bash
git clone https://github.com/RudraPratap01/operating_system_lab.git
cd operating_system_lab
```

### Running Scripts

```bash
# Example: Experiment 3
cd exp3
chmod +x check_type.sh
./check_type.sh /etc/passwd /var/log /no/such/path
```

### Compiling and Running C Programs

```bash
# Example: Experiment 9
cd exp9
gcc fork_wait.c -o fork_wait
./fork_wait
```

---

## Notes on Sample Outputs

- The `output.txt` file in each folder contains recorded terminal runs.
- Process IDs (PIDs), addresses, and timestamps will vary depending on your system execution.

---

## Author

- **Rudra Pratap** - [GitHub](https://github.com/RudraPratap01)
