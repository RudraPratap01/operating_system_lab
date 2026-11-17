#!/bin/bash
# Experiment 4 - Delete lines containing a specific word from files

if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <word> <file1> <file2> ..."
    exit 1
fi

word="$1"
shift

for file in "$@"
do
    if [ -f "$file" ]; then
        sed -i "/$word/d" "$file"
        echo "Deleted lines containing '$word' from $file"
    else
        echo "$file does not exist."
    fi
done
