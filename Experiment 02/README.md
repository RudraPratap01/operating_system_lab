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

### Verified Screenshots

- **Redirection & `sed` Print Range:** [experiment-2-1-date-and-sed-print.png](./experiment-2-1-date-and-sed-print.png)
- **`sed` Deletion & Global Substitution:** [experiment-2-2-sed-delete-and-substitute.png](./experiment-2-2-sed-delete-and-substitute.png)

---

### Conclusion
Successfully utilized shell redirection operators for stream steering and implemented `sed` scripts for selective line printing, deletion, and regular expression pattern substitution.
