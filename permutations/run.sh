#!/bin/bash

g++ *.cpp -o solve
./solve < inputs/1.txt > outputs/1.txt
diff outputs/1.txt their_outputs/1.txt