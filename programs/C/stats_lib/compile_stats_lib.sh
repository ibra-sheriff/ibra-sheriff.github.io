#!/bin/bash

# -lm to link the math library

gcc -o stats_lib stats_lib.c stats_lib.h -lm

./stats_lib