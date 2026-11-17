# Experiment 9 — Process Creation & Termination in C

**Aim:** To create child processes using the `fork()` system call and manage synchronization using the `wait()` system call.

## Files

| File | Language | Purpose |
| --- | --- | --- |
| `fork_wait.c` | C | Creates a child process with `fork()` and waits for completion with `wait()` |
| `output.txt` | Text | Sample terminal execution output |

## Commands & Concepts Covered

- Process creation with `fork()`
- Return value of `fork()`: `0` in child, child PID in parent, `< 0` on failure
- Process synchronization using `wait(NULL)`
- Process IDs (`getpid()`) and exit status

## How to Run

```bash
gcc fork_wait.c -o fork_wait
./fork_wait
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
