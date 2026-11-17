#!/bin/bash
# Experiment 2 - Shell Redirection and sed Stream Editor Operations

SAMPLE="sample.txt"

# 1. Output redirection (> and >>)
echo "Line 1: Linux Operating System" > "$SAMPLE"
echo "Line 2: Unix Shell Scripting" >> "$SAMPLE"
echo "Line 3: File Management and Processes" >> "$SAMPLE"
echo "Line 4: sed Stream Editor Tutorial" >> "$SAMPLE"
echo "Line 5: Operating System Laboratory" >> "$SAMPLE"

echo "=== Original File Contents ==="
cat "$SAMPLE"
echo ""

echo "=== sed Print: Printing Lines 2 to 4 ==="
sed -n '2,4p' "$SAMPLE"
echo ""

echo "=== sed Substitute: Replace 'Operating System' with 'OS' ==="
sed 's/Operating System/OS/g' "$SAMPLE"
echo ""

echo "=== sed Delete: Deleting Lines containing 'Unix' ==="
sed '/Unix/d' "$SAMPLE"
echo ""

# Clean up sample file
rm -f "$SAMPLE"
