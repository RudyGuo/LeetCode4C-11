/*
 * Integer to Roman.h
 *
 *  Created on: 2015Äê5ÔÂ11ÈÕ
 *      Author: Rudy
 */

#ifndef INTEGER_TO_ROMAN_H_
#define INTEGER_TO_ROMAN_H_
#include <string>
#include <map>
#include<iostream>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
    	map<int,string> mp = {{1000,"M"},{900,"CM"},{500,"D"},
    			{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},
				{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    	string res;
    	for(auto iter=mp.rbegin();iter!=mp.rend();++iter){
    		while(num-iter->first>=0){
    			res += iter->second;
    			num -= iter->first;
    		}
    	}
    	return res;
    }
};




#endif /* INTEGER_TO_ROMAN_H_ */
