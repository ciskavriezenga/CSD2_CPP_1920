#! /bin/bash

g++ -c oscillator.cpp
g++ -c oscillator_test.cpp 
g++ -o osc_test oscillator.o oscillator_test.o

