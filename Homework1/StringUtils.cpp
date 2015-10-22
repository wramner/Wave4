/*
 * StringUtils.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: Stefan, Mehran och Thomas
 */
#include <cctype>
#include <iostream>
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
    	 return s.substr(0, w);
     }

     string 		left		(const string& s, const int w, const char p)
     {
    	 /*
    	 if (s.length() >= w)
    		 return s.substr(0, w);
    	 else
    	 {
    		 string tmp = s;
    		 for (auto i=s.length(); i<w; i++)
    			 tmp += p;
    		 return tmp;
    	 }
*/

    	 return (s.length() >= w) ? truncate(s, w) : s + string(w-s.length(), p);

     }

     string 		right		(const string& s, const int w, const char p)
     {
    	 return (s.length() >= w) ? s.substr(s.length()-w, s.length()) : string(w-s.length(), p) + s;
     }

     string 		center		(const string& s, const int w, const char p)
     {
    	 return (s.length() >= w) ? s.substr((s.length()-w)/2,w) : string((w-s.length()+1)/2, 'P') + s + string((w-s.length())/2, 'P');
     }

     vector<string> split		(const string& s, const char delim)
	{
    	 cout << "payload = '"<<s<<"', delim='"<<delim<<"'"<<endl;
    	 vector<string> result;
    	 size_t start = 0, end = start;

    	 string D = ""+delim;
    	 while ((end = s.find(D, start) != string::npos))
    	 //for (string::iterator it = s.begin(); it != s.end(); it++)
    	 {
    		 auto snippet = s.substr(start, end-start);
    		 cout << "snippet = '"<<snippet<<"'"<<endl;
    		 break;
    		 result.push_back(snippet);
    		 start = end + 1;
    	 }


    	 return result;
    }

     string 		join		(const vector<string>& v, const char sep)
     {
    	 string s;

    	 return s;
     }
  }
}
