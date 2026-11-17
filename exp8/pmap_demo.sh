#!/bin/bash
# Experiment 8 - Observe memory maps of CPU-bound and I/O-bound programs using pmap

set -u

HERE="$(cd "$(dirname "$0")" && pwd)"
EXP7="$HERE/../exp7"
TMP="$(mktemp -d "${TMPDIR:-/tmp}/os-exp8.XXXXXX")"
CPU_PID=""
IO_PID=""

cleanup() {
    [ -n "$CPU_PID" ] && kill -9 "$CPU_PID" 2>/dev/null
    [ -n "$IO_PID" ] && kill -9 "$IO_PID" 2>/dev/null
    rm -rf "$TMP"
}
trap cleanup EXIT

# Compile programs from exp7
gcc "$EXP7/cpu_bound.c" -o "$TMP/cpu_bound" || exit 1
gcc "$EXP7/io_bound.c" -o "$TMP/io_bound" || exit 1

# Launch in background
"$TMP/cpu_bound" >/dev/null 2>&1 &
CPU_PID=$!

"$TMP/io_bound" >/dev/null 2>&1 &
IO_PID=$!

sleep 1

echo "=========================================="
echo "CPU-bound process (PID $CPU_PID)"
echo "=========================================="
pmap -x "$CPU_PID"

echo ""
echo "=========================================="
echo "I/O-bound process (PID $IO_PID)"
echo "=========================================="
pmap -x "$IO_PID"
