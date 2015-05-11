/*
 * Longest Substring Without Repeating Characters.h
 *
 *  Created on: 2015Äê5ÔÂ1ÈÕ
 *      Author: Rudy
 */
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	map<char,int> ump;
    	int res = 0;
    	int start = 0;
    	for(string::size_type i=0;i<s.size();i++){
    		if(ump.find(s[i])!=ump.end()){
    			res = max(res,(int)i-start);
    			start = max(ump[s[i]]+1,start);
    		}
    		ump[s[i]] = i;
    	}
    	res = max(res,(int)s.size()-start);
    	return res;
    }
};
