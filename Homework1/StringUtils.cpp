/*
 * StringUtils.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: Stefan, Mehran och Thomas
 */
#include <cctype>
#include "StringUtils.hpp"

using namespace std;

namespace seb {
  namespace str {
     string 		lowercase	(const string& s)
     {
         string    r;

         for (auto ch : s)
        	 r += ::tolower(ch);

         return r;
     }

     string 		uppercase	(const string& s)
     {
    	     string    r;

    	      for (auto ch : s)
    	    	  r += ::toupper(ch);

    	      return r;
     }

     string 		truncate	(const string& s, const int w)
     {
    	 return s;
     }
     string 		left		(const string& s, const int w, const char p)
     {
    	 return s;
     }
     string 		right		(const string& s, const int w, const char p)
     {
    	 return s;
     }
     string 		center		(const string& s, const int w, const char p)
     {
    	 return s;
     }
     vector<string> split		(const string& s, const char delim)
    		 {
    	 vector<string> v;

    	 return v;
    		 }
     string 		join		(const vector<string>& v, const char sep)
     {
    	 string s;

    	 return s;
     }
  }
}
