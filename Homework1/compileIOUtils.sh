#!/bin/bash

CXX_FLAGS="-std=c++14 -Wall -fmax-errors=1"

set -e
set -x

g++ $CXX_FLAGS -c IOUtils.cpp
g++ $CXX_FLAGS -c IOUtilsUnittest.cpp

g++ $CXX_FLAGS IOUtils.o IOUtilsUnittest.o -o IOUtilsUnittest

