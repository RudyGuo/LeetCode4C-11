/*
 * Longest Palindromic Substring.h
 *
 *  Created on: 2015Äê5ÔÂ4ÈÕ
 *      Author: Rudy
 */

#ifndef LONGEST_PALINDROMIC_SUBSTRING_H_
#define LONGEST_PALINDROMIC_SUBSTRING_H_
#include<string>
#include<algorithm>
#include<iostream>
//#include<memory.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
    	string str = "@#";
    	for(size_t i=0;i<s.length();++i){
    		str += s.substr(i,1)+"#";
    	}
    	str += "$";
    	int p[str.size()];
//    	memset(p,0,sizeof(p));
    	fill_n(p,str.size(),0);
    	int m = 0,j = 0;
    	int idx = 1 ,maxLen = 0;
    	for(size_t i=1;i<str.size()-1;i++){
    		p[i] = min(p[2*m-i],(int)(j-i));
    		while(str[i+p[i]+1]==str[i-p[i]-1]){
    			++p[i];
    		}
    		if((int)(p[i]+i)>j){
    			j= p[i]+i;
    			m = i;
    		}
    		if(p[i]>maxLen){
    			idx = i;
    			maxLen = p[i];
    		}
    	}
    	string rr(str.begin()+idx-maxLen,str.begin()+idx+maxLen+1);
    	string res;
    	for(size_t i=0;i<rr.size();i++){
    		if(rr[i]!='#'){
    			res.append(rr.substr(i,1));
    		}
    	}
    	return res;
    }
};




#endif /* LONGEST_PALINDROMIC_SUBSTRING_H_ */
