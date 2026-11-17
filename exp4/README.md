# Experiment 4 — User Session Tracking, Line Ranges & Text Processing

**Aim:** To track user sessions and working time using `w` and `awk`, and perform line range extraction and in-place line deletion using `sed`.

## Files

| File | Purpose |
| --- | --- |
| `working_users.sh` | Calculates session duration of a logged-in user |
| `line_range.sh` | Displays a specific range of lines from a file using `sed -n` |
| `delete_word.sh` | Deletes lines matching a word across files using `sed -i` |
| `output.txt` | Sample terminal execution output |

## Commands & Concepts Covered

- Parsing process/session data (`w`, `awk`)
- Epoch time calculations (`date +%s`)
- Line range slicing with `sed -n "${start},${end}p"`
- In-place file modification with `sed -i "/pattern/d"`

## How to Run

```bash
chmod +x working_users.sh line_range.sh delete_word.sh

# User session time
./working_users.sh

# Print line range
./line_range.sh /etc/passwd 1 5

# Delete lines containing a word
./delete_word.sh unwanted_word sample.txt
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
