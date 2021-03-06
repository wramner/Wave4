/*
 * IOUtils.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: karl
 */

#include <fstream>
#include <iostream>
#include <algorithm>
#include <unistd.h>
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

		int size(const string& filename) {
			ifstream file(filename, ios::in | ios::binary);
			file.seekg(0, ios_base::end);
			return file.tellg();
		}
		void load(const string& filename, int idx, const int size, char* record) {
			fstream file(filename, ios::in | ios::binary);
			file.seekg(idx * size, ios_base::beg);
			file.read(record, size);
		}

		void store(const string& filename, int idx, const int size, char* record) {
			int filesize = seb::io::size(filename);
			if(filesize < (idx * size)) {
				truncate(filename.c_str(), (idx*size));
			}
			fstream file(filename, ios::app | ios::out | ios::binary);

			int index = idx * size;
			file.seekp(index, ios_base::beg);
			file.write(record, size);
		}
	}
}


