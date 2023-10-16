#!/bin/bash
gcc -Wall -c *.c -fpic
gcc *.o -shared -o liball.so
