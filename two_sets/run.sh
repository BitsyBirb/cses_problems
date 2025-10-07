#!/bin/bash

g++ *.cpp -o solve
./solve < tests/1.txt > output/1.txt
diff -q output/1.txt their_outputs/1.txt