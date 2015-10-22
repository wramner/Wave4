/*
 * IOUtilsUnittest.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: karl
 */

#include "IOUtils.hpp"
#include <cassert>
#include <cstdio>
#include <iostream>

void testTextFunctions() {
	string filename(tmpnam(NULL));
	string test = "abcdefghijklmnopqrstuvwxyz";

	seb::io::text(filename, test);
	string read = seb::io::text(filename);

	assert(read == test);
	remove(filename.c_str());
}

void testLinesFunctions() {
	string filename(tmpnam(NULL));
	vector<string> input = {"test1", "test2", "test3"};

	seb::io::lines(filename, input);
	vector<string> output;
	output = seb::io::lines(filename);
	assert( input.size() == output.size() );
	assert( equal( input.begin(), input.end(), output.begin() ) );
	remove(filename.c_str());
}


int main(int argc, char* argv[]) {
	testTextFunctions();
	testLinesFunctions();
	cout << "All test completed." << endl;
	return 0;
}


