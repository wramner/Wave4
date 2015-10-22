/* * StringTest.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: sebis
 */

#include <iostream>
#include <cassert>
#include "StringUtils.hpp"

using namespace std;
using namespace seb::str;

const bool verbose = true;

void lowercase_should_work()
{
	cout << "Testar funktionen lowercase" << endl;
	if (verbose) cout << "abcABC123_+ -> " << lowercase("abcABC123_+") << endl << endl;
	assert(lowercase("abcABC123_+") == "abcabc123_+");
}

void uppercase_should_work()
{
	cout << "Testar funktionen uppercase" << endl;
	if (verbose) cout << "abcABC123_+ -> " << uppercase("abcABC123_+") << endl << endl;
	assert(uppercase("abcABC123_+") == "ABCABC123_+");
}

int main()
{
	cout << "Testar våra stringfunktioner" << endl << endl;
	lowercase_should_work();
	uppercase_should_work();

	return 0;
}
