#!/bin/bash
# Experiment 1 - Check if Argument is Zero

if [ $# -eq 0 ]; then
    echo "Usage: $0 <number>"
    exit 1
fi

if [ "$1" -eq 0 ] 2>/dev/null; then
    echo "True"
else
    echo "False"
fi
