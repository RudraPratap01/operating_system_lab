# Experiment 5 — String Operations in Shell Script & C

**Aim:** To determine the length of a string and extract a substring using Bash parameter expansion and an equivalent C program.

## Files

| File | Language | Purpose |
| --- | --- | --- |
| `string_ops.sh` | Bash | String length `${#str}` and substring extraction `${str:start:length}` |
| `string_ops.c` | C | String length calculation and substring extraction using character array |
| `output.txt` | Text | Sample terminal execution output |

## Commands & Concepts Covered

- Bash parameter expansion: `${#str}` and `${str:start:len}`
- C character arrays and manual string traversal
- `fgets()` for safe string input vs `scanf()`
- Zero-based index calculations

## How to Run

```bash
# Run Bash script
chmod +x string_ops.sh
./string_ops.sh

# Compile & run C program
gcc string_ops.c -o string_ops
./string_ops
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
