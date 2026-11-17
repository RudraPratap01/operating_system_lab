# Experiment 7 — CPU-Bound vs I/O-Bound C Programs

**Aim:** To observe and compare CPU utilization, execution characteristics, and process states of CPU-bound vs I/O-bound programs.

## Files

| File | Language | Purpose |
| --- | --- | --- |
| `cpu_bound.c` | C | Runs an infinite computation loop (keeps CPU at ~100%) |
| `io_bound.c` | C | Periodically writes to disk and sleeps (CPU stays near 0%) |
| `output.txt` | Text | Sample terminal execution output and `top` comparison |

## Commands & Concepts Covered

- CPU-bound vs I/O-bound processes
- Process states: Running (`R`) vs Interruptible Sleep (`S`)
- Monitoring CPU utilization and process state using `top`
- Background execution with `&` and killing processes with `kill`

## How to Run

```bash
# Compile programs
gcc cpu_bound.c -o cpu_bound
gcc io_bound.c -o io_bound

# Run in background
./cpu_bound &
CPU_PID=$!
./io_bound &
IO_PID=$!

# Monitor both processes in top
top -p $CPU_PID,$IO_PID

# Terminate processes
kill $CPU_PID $IO_PID
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
