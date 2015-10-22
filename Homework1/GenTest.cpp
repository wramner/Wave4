/*
 * GenTest.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: sebis
 */

#include <string>
#include <cassert>
#include <vector>
#include <iostream>
#include "GenUtils.hpp"

using namespace std;
using namespace seb::gen;

void testNextString() {
	vector<string> testVec {"Roger", "Åsa", "Jocke", "Evert", "Apan"};
	string retStr = nextString(testVec);
	bool found = false;
	for (auto s : testVec) {
		if (s == retStr) found = true;
	}
	assert(found == true);
	cout << "nextString tested" << endl;
}

void testFormat() {

}


int main() {
	testNextString();
	testFormat();
}

