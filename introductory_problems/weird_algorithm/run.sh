#!/bin/bash

g++ solution.cpp -o solve

./solve < ./tests/input1.txt > ./tests/output1.txt
diff -q ./tests/output1.txt ./tests/their_output1.txt