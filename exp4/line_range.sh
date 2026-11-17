#!/bin/bash
# Experiment 4 - Print lines in a file between a start and end range

if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <filename> <start_line> <end_line>"
    exit 1
fi

file="$1"
start="$2"
end="$3"

if [ ! -f "$file" ]; then
    echo "Error: File '$file' does not exist."
    exit 1
fi

sed -n "${start},${end}p" "$file"
