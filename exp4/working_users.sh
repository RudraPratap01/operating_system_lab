#!/bin/bash
# Experiment 4 - User Session Tracking & Total Working Time

echo "Currently logged in users:"
w
echo ""

read -p "Enter username: " user

login_time=$(w | awk -v u="$user" '$1 == u {print $4; exit}')

if [ -z "$login_time" ]; then
    echo "User '$user' is not currently logged in."
else
    echo "Login time: $login_time"

    login_seconds=$(date -d "$login_time" +%s)
    current_seconds=$(date +%s)

    total_seconds=$((current_seconds - login_seconds))
    hours=$((total_seconds / 3600))
    minutes=$(((total_seconds % 3600) / 60))

    echo "Total working time: $hours hours $minutes minutes"
fi
