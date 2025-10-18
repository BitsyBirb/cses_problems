#!/bin/bash

g++ solution.cpp -o solve


./solve < ./inputs/1.txt > ./outputs/1.txt 
diff -q ./outputs/1.txt ./their_outputs/1.txt