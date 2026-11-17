# Experiment 10 — Observing Virtual Memory Addresses & ASLR in C

> **Submitted by:** Rudra Pratap  

---

### Objective
To print and analyze the virtual memory addresses of local variables across repeated process invocations to observe the effect of Address Space Layout Randomization (ASLR), and evaluate fixed addressing when ASLR is disabled.

---

### Source Code

- **Program:** [`virtual_addr.c`](./virtual_addr.c)

```c
int test_variable = 42;
printf("PID: %d | Virtual Address: %p\n", getpid(), (void *)&test_variable);
```

---

### Key Concepts

- **Virtual Address Space:** Every user process operates inside its own isolated 64-bit virtual memory space managed through multi-level page tables.
- **ASLR (Address Space Layout Randomization):** A security defense mechanism enabled in modern Linux kernels that randomizes stack, heap, and library base addresses on every program invocation to prevent buffer overflow exploits.
- **Disabling ASLR (`setarch $(uname -m) -R`):** Runs the target binary with the `ADDR_NO_RANDOMIZE` personality flag, yielding constant virtual addresses across repeated executions.

---

### How to Compile & Run

```bash
# Compile program
gcc -Wall -Wextra virtual_addr.c -o virtual_addr

# 1. Observe addresses with ASLR enabled (default)
./virtual_addr &
./virtual_addr &
killall virtual_addr

# 2. Observe addresses with ASLR disabled
setarch $(uname -m) -R ./virtual_addr &
setarch $(uname -m) -R ./virtual_addr &
killall virtual_addr
```

---

### Sample Output

Refer to [`output.txt`](./output.txt) for comparative address output with ASLR enabled versus disabled.

---

### Conclusion
Observed virtual address isolation and confirmed how ASLR protects Linux memory spaces by pseudo-randomizing variable locations across process instances.
