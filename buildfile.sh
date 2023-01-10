#!/usr/bin/env bash

CXX="g++ -fmodules-ts -std=c++23"
$CXX -o module_hello.pcm --precompile -x c++-module module_hello.cppm
$CXX -o hello.exe -fprebuilt-module-path=. main.cpp hello.cpp
./hello.exe 
