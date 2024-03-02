#!/bin/bash

CMD="make re"

$CMD > /dev/null 2>&1 & CMD_PID=$!

echo -n "Compiling"

while kill -0 $CMD_PID 2>/dev/null; do
  for i in {1..3}; do
    echo -n "."
    sleep 0.5
  done
  echo -ne "\rCompiling   \rCompiling"
done

echo -e "\rCompiling finished.    "
