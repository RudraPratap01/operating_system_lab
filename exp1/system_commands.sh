#!/bin/bash
# Experiment 1 - Basic Linux System Administration and Process Management Commands

echo "=== System Information ==="
echo "Current User: $(whoami)"
echo "Current Working Directory: $(pwd)"
echo "Current Date & Time: $(date)"
echo "Kernel Information: $(uname -a)"
echo ""

echo "=== Directory Listing ==="
ls -la
echo ""

echo "=== Disk Usage ==="
df -h .
echo ""

echo "=== Current Process Status ==="
ps -f
