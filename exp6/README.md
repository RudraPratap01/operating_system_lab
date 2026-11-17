# Experiment 6 — Memory Allocation & Virtual Memory in C

**Aim:** To allocate a user-specified quantity of memory using `malloc()`, force page residency by touching pages, and observe system memory behaviour.

## Files

| File | Language | Purpose |
| --- | --- | --- |
| `memory.c` | C | Dynamically allocates `N` MB and touches one byte every 4 KB page |
| `output.txt` | Text | Sample terminal execution output |

## Commands & Concepts Covered

- Dynamic memory allocation via `malloc()`
- Virtual memory pages (4 KB page size) and lazy allocation (demand paging)
- Forcing page faults / Resident Set Size (RSS) population
- Monitoring memory using `free -h` and `top`

## How to Run

```bash
gcc memory.c -o memory
./memory 200

# In a separate terminal
free -h
# or
top -p $(pgrep memory)
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
