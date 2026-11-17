# Experiment 2 — Shell Redirection & the `sed` Stream Editor

**Aim:** To practice stream redirection (`>`, `>>`) and text stream manipulation using the `sed` stream editor (printing ranges, deleting lines, and regex substitution).

## Files

| File | Purpose |
| --- | --- |
| `sed_demo.sh` | Demonstrates file redirection and common `sed` commands (`p`, `d`, `s`) |
| `output.txt` | Sample terminal execution output |

## Commands & Concepts Covered

- Standard Output Redirection (`>`, `>>`)
- `sed -n 'start,endp'` to print selective line ranges
- `sed '/pattern/d'` to delete matching lines
- `sed 's/old/new/g'` for pattern substitution

## How to Run

```bash
chmod +x sed_demo.sh
./sed_demo.sh
```

## Sample Output

See [`output.txt`](output.txt) for verified terminal output.
