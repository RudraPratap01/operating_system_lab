# Experiment 04 — User Session Tracking, Line Ranges & Text Processing

> **Submitted by:** Rudra Pratap  

---

### Objective
To implement shell scripts for tracking active user session durations, isolating specific line ranges from text files, and executing in-place pattern-based line deletion across multiple files.

---

### Scripts in this Experiment

| Script File | Purpose |
| :--- | :--- |
| [`working_users.sh`](./working_users.sh) | Identifies whether a given username is logged in, extracts login timestamp, and calculates total session duration in hours and minutes. |
| [`line_range.sh`](./line_range.sh) | Extracts and displays a slice of lines between a start and end line number using `sed -n`. |
| [`delete_word.sh`](./delete_word.sh) | Iterates over input files and deletes all lines containing a specified target keyword in-place using `sed -i`. |

---

### Key Commands & Concepts

- **`w` & `awk`:** Inspects active login sessions and extracts column data (`$1 == u {print $4}`).
- **`date +%s`:** Converts time strings into Unix epoch seconds to compute elapsed time intervals.
- **`sed -n "${start},${end}p"`:** Prints selected line ranges without displaying the rest of the document.
- **`sed -i "/$word/d"`:** Modifies target files directly in-place by removing matching lines.

---

### How to Run

```bash
chmod +x working_users.sh line_range.sh delete_word.sh

# 1. Track user session duration
./working_users.sh

# 2. Extract line slice (e.g. lines 1 to 5)
./line_range.sh /etc/passwd 1 5

# 3. In-place deletion of lines matching keyword
./delete_word.sh unwanted_keyword data.txt
```

---

### Verified Output

Refer to [`output.txt`](./output.txt) for sample terminal run data.

---

### Conclusion
Demonstrated real-world Linux text extraction, pipeline processing, and session calculation techniques in Bash.
