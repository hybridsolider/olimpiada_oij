#!/bin/bash

echo "1. Compile"
echo "2. Test"
echo "3. Compile all"
echo "4. Delete all binaries"
echo "99. Quit"
read -p "Enter your choice: " choice

if [ "$choice" -eq 1 ]; then
    python3 pman.py 1
elif [ "$choice" -eq 2 ]; then
    python3 pman.py 2
elif [ "$choice" -eq 3 ]; then
    python3 pman.py 3
elif [ "$choice" -eq 4 ]; then
    python3 pman.py 4
elif [ "$choice" -eq 99 ]; then
    echo "Quitting..."
    exit 0
else
    echo "Invalid choice."
fi
