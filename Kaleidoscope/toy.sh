#!/bin/sh

clang++ -g -O3 toy.cpp `llvm-config --cxxflags`
./a.out

