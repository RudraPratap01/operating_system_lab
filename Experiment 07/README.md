# Experiment 07 — CPU-Bound vs I/O-Bound C Programs

> **Submitted by:** Rudra Pratap  

---

### Objective
To implement, execute, and contrast the operational characteristics of a CPU-bound process versus an I/O-bound process by inspecting CPU percentages, process states, and scheduler behaviour via `top`.

---

### Programs Overview

| Program | Nature of Workload | Behaviour |
| :--- | :--- | :--- |
| [`cpu_bound.c`](./cpu_bound.c) | CPU-intensive | Runs an infinite integer increment loop, keeping one CPU core saturated (~100% CPU, state `R` - Running). |
| [`io_bound.c`](./io_bound.c) | I/O-intensive | Repeatedly opens, writes to `dummy.txt`, closes the file, and sleeps for 1 second (~0% CPU, state `S` - Interruptible Sleep). |

---

### Key Observations

- **Process States:**
  - `R` (Running/Runnable): CPU-bound process actively consumes processor time slices.
  - `S` (Interruptible Sleep): I/O-bound process spends almost all time waiting for file system operations or timer events.
- **CPU Utilization:** Under `top`, `cpu_bound` hits 99-100% CPU usage, whereas `io_bound` remains negligible (0.0%).

---

### How to Compile & Run

```bash
# Compile both programs
gcc -Wall -Wextra cpu_bound.c -o cpu_bound
gcc -Wall -Wextra io_bound.c -o io_bound

# Run both in background
./cpu_bound &
CPU_PID=$!

./io_bound &
IO_PID=$!

# Monitor CPU usage side-by-side
top -p $CPU_PID,$IO_PID

# Terminate both tasks
kill $CPU_PID $IO_PID
```

---

### Sample Output

See [`output.txt`](./output.txt) for comparative terminal traces and `top` metrics.

---

### Conclusion
Demonstrated how the OS kernel schedules CPU-intensive versus I/O-wait processes, illustrating state transitions between `R` and `S`.
