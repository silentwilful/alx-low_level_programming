#!/bin/bash
gcc -Wall -Wextra -werror -pedantic -c *.c
ar rc liball.a *.o
