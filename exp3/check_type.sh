#!/bin/bash
# Experiment 3 - Check whether arguments are regular files, directories, or do not exist

if [ $# -eq 0 ]; then
    echo "Usage: $0 <path1> <path2> ..."
    exit 1
fi

for item in "$@"
do
    if [ -f "$item" ]; then
        echo "$item is a regular file."
    elif [ -d "$item" ]; then
        echo "$item is a directory."
    else
        echo "$item does not exist."
    fi
done
