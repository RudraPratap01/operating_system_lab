# Experiment 3 — Bash Scripting: Conditionals, Loops & File Tests

**Aim:** To write Bash scripts using loops (`for`), conditionals (`if-elif-else`), file test operators (`-f`, `-d`), and command substitution.

## Files

| File | Purpose |
| --- | --- |
| `check_type.sh` | Checks multiple arguments and identifies each as a regular file, directory, or non-existent |
| `rename_upper.sh` | Renames provided files to uppercase using `tr` and `mv` |
| `output.txt` | Sample terminal execution output |

## Commands & Concepts Covered

- Positional parameters (`$#`, `$@`)
- Loop iteration over arguments (`for item in "$@"`)
- File test operators (`-f`, `-d`)
- String transformation using `tr` and file renaming via `mv`

## How to Run

```bash
chmod +x check_type.sh rename_upper.sh

# Test file/directory types
./check_type.sh /etc/passwd /var/log /no/such/path

# Test uppercase conversion
touch testfile.txt
./rename_upper.sh testfile.txt
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
