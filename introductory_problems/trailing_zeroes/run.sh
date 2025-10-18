#!/bin/bash

g++ *.cpp -o solve
./solve < inputs/1.txt > outputs/1.txt
diff -y outputs/1.txt their_outputs/1.txt > results/1.txt