/*
 * IOUtils.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: karl
 */

#include <fstream>
#include <algorithm>
#include "IOUtils.hpp"
using namespace std;

namespace seb {
	namespace io {
		string text(const string& filename) {
			string result = "";
			ifstream file{filename};
			for(string line; getline(file, line);) {
				result += line;
			}
			return result;
		}
		void text(const string& filename, const string& content) {
			ofstream file(filename);
			file << content;
		}
		vector<string> lines(const string& filename) {
			vector<string> result;
			ifstream file{filename};
			for(string line; getline(file, line);) {
				result.push_back(line);
			}
			return result;
		}
		void lines(const string& filename, vector<string> content) {
			ofstream file(filename);
			for_each(content.begin(), content.end(), [&](string item) { file << item << endl;});
		}
//		int size(const string& filename);
//		void load(const string& filename, int idx, const int size, char* record);
//		void store(const string& filename, int idx, const int size, char* record);

	}
}


