# Experiment 10 — Observing Virtual Memory Addresses in C

**Aim:** To observe virtual memory address assignments across process runs and understand Address Space Layout Randomization (ASLR).

## Files

| File | Language | Purpose |
| --- | --- | --- |
| `virtual_addr.c` | C | Prints process PID and virtual memory address of a stack variable |
| `output.txt` | Text | Sample terminal execution output comparing ASLR states |

## Commands & Concepts Covered

- Virtual vs Physical memory addresses
- Address Space Layout Randomization (ASLR)
- Disabling ASLR using `setarch $(uname -m) -R`
- Page tables and process memory isolation

## How to Run

```bash
gcc virtual_addr.c -o virtual_addr

# Run with ASLR enabled (addresses change across runs)
./virtual_addr &
./virtual_addr &
killall virtual_addr

# Run with ASLR disabled (addresses remain identical across runs)
setarch $(uname -m) -R ./virtual_addr &
setarch $(uname -m) -R ./virtual_addr &
killall virtual_addr
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
