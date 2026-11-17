# Experiment 02 — Shell Redirection & Stream Editing with `sed`

> **Submitted by:** Rudra Pratap  

---

### Objective
To understand standard stream redirection mechanisms (`stdout`, `stderr`, append) and execute pattern-based text processing using the `sed` (stream editor) utility.

---

### 1. I/O Stream Redirection

| Operator | Target Stream | Description |
| :--- | :--- | :--- |
| `>` | Standard Output (`stdout`) | Overwrites destination file with command output. |
| `>>` | Standard Output (`stdout`) | Appends command output to end of file without truncating. |
| `2>` | Standard Error (`stderr`) | Redirects error messages specifically to a file or device. |
| `&>` | `stdout` + `stderr` | Combines both regular and error streams into a single destination. |

---

### 2. `sed` Stream Editor Operations

| Operation Type | Command Syntax | Functionality |
| :--- | :--- | :--- |
| **Print Line Range** | `sed -n '1,5p' file.txt` | Suppresses default output (`-n`) and prints only lines 1 through 5. |
| **Delete Matching Lines** | `sed '/pattern/d' file.txt` | Filters out all lines matching `pattern` from the output stream. |
| **String Substitution** | `sed 's/old/new/g' file.txt` | Replaces occurrences of `old` with `new` globally across each line. |

---

### Terminal Execution Output

All commands were executed in a Linux terminal environment. Refer to [`output.txt`](./output.txt) for the complete verified terminal output:

```text
$ date > session.log
$ echo "Line 1: Linux Operating Systems" >> session.log
$ echo "Line 2: Shell Redirection Basics" >> session.log
$ echo "Line 3: Stream Editing with sed" >> session.log

$ sed -n '2,3p' session.log
Line 1: Linux Operating Systems
Line 2: Shell Redirection Basics

$ sed 's/Operating Systems/OS/g' session.log
Tue Nov 17 10:26:00 IST 2026
Line 1: Linux OS
Line 2: Shell Redirection Basics
Line 3: Stream Editing with sed
```

---

### Conclusion
Successfully utilized shell redirection operators for stream steering and implemented `sed` scripts for selective line printing, deletion, and regular expression pattern substitution.
