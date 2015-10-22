CXX="g++ -c -std=c++14 -Wall -fmax-errors=1"
LNK="g++"
set -x
set -e
$CXX GenUtils.cpp
$CXX GenTest.cpp
$LNK -o GenTest GenTest.o GenUtils.o
