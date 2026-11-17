# Experiment 1 — Linux System Administration & Process Management

**Aim:** To practice basic Linux system administration commands for file and process management, and simple positional parameter evaluation.

## Files

| File | Purpose |
| --- | --- |
| `system_commands.sh` | Demonstrates essential Linux commands (`whoami`, `pwd`, `date`, `uname`, `ls`, `df`, `ps`) |
| `check_zero.sh` | Checks whether the passed command-line argument is `0` |
| `output.txt` | Sample terminal execution output |

## Commands & Concepts Covered

- Shell navigation and directory inspection (`pwd`, `ls`, `cd`)
- System and user inspection (`whoami`, `uname`, `date`, `df`)
- Process observation (`ps`, `jobs`, `kill`)
- Positional parameters (`$1`, `$#`) and numerical comparison (`-eq`)

## How to Run

```bash
chmod +x system_commands.sh check_zero.sh

# Run system commands script
./system_commands.sh

# Run argument check
./check_zero.sh 0
./check_zero.sh 5
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
