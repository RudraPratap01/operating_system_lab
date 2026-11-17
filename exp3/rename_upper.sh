#!/bin/bash
# Experiment 3 - Rename given files to uppercase filenames

if [ $# -eq 0 ]; then
    echo "Usage: $0 <file1> <file2> ..."
    exit 1
fi

for file in "$@"
do
    if [ -f "$file" ]; then
        new_name=$(echo "$file" | tr '[:lower:]' '[:upper:]')
        if [ "$file" != "$new_name" ]; then
            mv "$file" "$new_name"
            echo "Renamed '$file' -> '$new_name'"
        else
            echo "'$file' is already uppercase."
        fi
    else
        echo "$file does not exist."
    fi
done
