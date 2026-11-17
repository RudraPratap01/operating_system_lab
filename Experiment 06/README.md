# Experiment 06 — Memory Allocation & Virtual Memory in C

> **Submitted by:** Rudra Pratap  

---

### Objective
To allocate a user-specified quantity of heap memory using `malloc()`, force page-table population via demand paging by writing to every 4 KB page, and monitor system memory utilization using Linux tools.

---

### Source Code

- **Program:** [`memory.c`](./memory.c)

```c
/* Allocates N megabytes and writes 1 byte per 4096-byte page */
for (size_t offset = 0; offset < total_bytes; offset += 4096) {
    allocated_block[offset] = 1;
}
```

---

### Virtual Memory Concepts

- **Virtual Address Space vs Resident Set Size (RSS):** Calling `malloc()` reserves virtual address space in the process memory descriptor, but the kernel delays allocating physical RAM until the memory is first accessed (lazy allocation / demand paging).
- **Page Size (4 KB):** Modern x86-64 hardware manages memory in 4096-byte page frames. Writing to one byte in each page triggers a minor page fault, mapping a real physical frame to that virtual page.
- **System Monitoring:** `free -h` and `top -p <PID>` allow live observation of used RAM and process RSS.

---

### How to Compile & Run

```bash
# Compile with strict flags
gcc -Wall -Wextra memory.c -o memory

# Allocate 256 MB of memory
./memory 256

# In a separate terminal, observe RAM consumption:
free -h
# or
top -p $(pgrep memory)
```

*(Note: The program keeps running until interrupted with `Ctrl+C`).*

---

### Sample Output

Refer to [`output.txt`](./output.txt) for verified terminal output showing memory allocation and `free -h` metrics.

---

### Conclusion
Demonstrated demand paging and memory reservation under Linux, verifying that touching allocated virtual pages commits physical RAM.
