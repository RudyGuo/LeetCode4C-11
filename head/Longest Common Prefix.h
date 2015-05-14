/*
 * Longest Common Prefix.h
 *
 *  Created on: 2015Äê5ÔÂ11ÈÕ
 *      Author: Rudy
 */

#ifndef LONGEST_COMMON_PREFIX_H_
#define LONGEST_COMMON_PREFIX_H_
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	if(strs.size()==0) return "";
    	string cmp = strs[0];
    	for(size_t i=1;i!=strs.size();++i){
    		cmp = compare(cmp,strs[i]);
    		if(cmp.size()==0) return "";
    	}
    	return cmp;
    }
private:
    string compare(string &str1,string &str2){
    	string res;
    	for(size_t i=0;i!=str1.size()&&i!=str2.size();++i){
    		if(str1[i]==str2[i]){
    			res += str1[i];
    		}else{
    			break;
    		}
    	}
    	return res;
    }
};



#endif /* LONGEST_COMMON_PREFIX_H_ */
