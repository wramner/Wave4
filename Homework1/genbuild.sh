set -x
set -e
g++ -std=c++14 -c GenUtils.cpp
g++ -std=c++14 -c GenTest.cpp
g++ -o GenTest GenTest.o GenUtils.o
