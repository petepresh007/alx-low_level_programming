#!/bin/bash
gcc -Wall -Fpic -c *.c
gcc -shared -o liball.so *.o
