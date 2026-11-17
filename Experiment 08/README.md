# Experiment 08 — Observing Process Memory Maps Using `pmap`

> **Submitted by:** Rudra Pratap  

---

### Objective
To inspect and analyze the complete virtual memory layout of running processes using the `pmap` utility, identifying code, data, heap, stack, and dynamically linked shared libraries.

---

### Source Code

- **Automated Script:** [`pmap_demo.sh`](./pmap_demo.sh)

The script compiles the CPU-bound and I/O-bound programs from `Experiment 07`, launches them in the background, invokes `pmap -x <PID>` for each, and cleanly terminates them upon completion.

---

### Memory Map Columns Explained

| Column | Meaning | Description |
| :--- | :--- | :--- |
| **Address** | Virtual Start Address | Base virtual address of the memory mapping segment. |
| **Kbytes** | Virtual Size | Total allocated virtual address space for the segment. |
| **RSS** | Resident Set Size | Physical RAM actively occupied by the segment. |
| **Dirty** | Modified Pages | Pages modified in RAM that have not yet been written back to disk. |
| **Mode** | Access Permissions | Read (`r`), write (`w`), execute (`x`), private/shared (`p`/`s`). |
| **Mapping** | Object Name | Program binary, heap `[ anon ]`, stack `[ stack ]`, or shared library (`libc.so.6`, `ld-linux`). |

---

### Execution Instructions

```bash
chmod +x pmap_demo.sh
./pmap_demo.sh
```

---

### Sample Output

Refer to [`output.txt`](./output.txt) for a complete `pmap -x` memory map trace.

---

### Conclusion
`pmap` revealed the distinct segments of a Linux process, demonstrating how code sections are mapped read-only and executable (`r-x`), data segments are read-write (`rw-`), and shared libraries are dynamically linked into virtual memory.
