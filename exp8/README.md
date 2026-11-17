# Experiment 8 — Observing Process Memory Maps Using `pmap`

**Aim:** To inspect and analyze the virtual memory layout and mapping of running processes using the `pmap` tool.

## Files

| File | Purpose |
| --- | --- |
| `pmap_demo.sh` | Compiles CPU- and I/O-bound programs, launches them, displays `pmap -x` maps, and cleans up |
| `output.txt` | Sample terminal execution output showing full memory mappings |

## Commands & Concepts Covered

- Process virtual address mapping: text, data, BSS, heap, stack, and shared libraries (`libc`, dynamic linker `ld-linux`)
- Permissions / Mode: `r----` (read-only), `r-x--` (executable code), `rw---` (read-write data)
- Resident Set Size (RSS) vs Virtual memory size (Kbytes)
- Memory map inspection using `pmap -x <PID>`

## How to Run

```bash
chmod +x pmap_demo.sh
./pmap_demo.sh
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
