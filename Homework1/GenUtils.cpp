/*
 * GenUtils.cpp
 *
 *  Created on: Oct 13, 2015
 *      Author: sebis
 */

#include <vector>
#include <random>
#include <string>

using namespace std;

namespace seb {

	namespace gen {

		string nextString(vector<string> strVec) {
			default_random_engine r;
			uniform_int_distribution<> rect(0, strVec.size()-1);
			return strVec[rect(r)];
		}

	}

}




