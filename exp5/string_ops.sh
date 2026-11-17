#!/bin/bash
# Experiment 5 - String operations in Shell Script

read -p "Enter a String: " str

echo "Length of String: ${#str}"

read -p "Enter starting position (0-based): " start
read -p "Enter number of characters: " length

echo "Substring: ${str:start:length}"
