# Experiment 03 — Bash Scripting: Conditionals & Loops

> **Submitted by:** Rudra Pratap  

---

### Objective
To implement a robust Bash script that takes multiple file-system paths as command-line arguments and classifies each as a regular file, a directory, or non-existent using conditional branching and file-test operators.

---

### Source Code Overview

- **Script:** [`check_type.sh`](./check_type.sh)

```bash
#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <file/directory> ..."
    exit 1
fi

for item in "$@"
do
    if [ -f "$item" ]
    then
        echo "$item is a regular file."
    elif [ -d "$item" ]
    then
        echo "$item is a directory."
    else
        echo "$item does not exist."
    fi
done
```

---

### Core Concepts

| Identifier | Category | Purpose |
| :--- | :--- | :--- |
| `$#` | Special Parameter | Tracks the total count of passed positional arguments. |
| `"$@"` | Special Parameter | Expands to all passed arguments as separate quoted words. |
| `for item in "$@"` | Iteration | Loops through every command-line parameter sequentially. |
| `-f` | File Test | Returns true if the path points to an existing regular file. |
| `-d` | Directory Test | Returns true if the path points to an existing directory. |
| `exit 1` | Control Flow | Immediately halts execution with an error status code upon invalid invocation. |

---

### Execution Instructions

```bash
chmod +x check_type.sh
./check_type.sh /etc/passwd /var/log /no/such/path check_type.sh
```

---

### Sample Output

```text
/etc/passwd is a regular file.
/var/log is a directory.
/no/such/path does not exist.
check_type.sh is a regular file.
```

*(See [`output.txt`](./output.txt) for raw execution output).*

---

### Conclusion
Demonstrated parameter parsing, loop structures, and conditional evaluations in Bash shell scripts.
