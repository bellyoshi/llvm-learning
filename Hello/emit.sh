#!/bin/sh
clang -S -emit-llvm -O3 helloworld.c
llc helloworld.ll
clang helloworld.s -o helloworld
./helloworld

