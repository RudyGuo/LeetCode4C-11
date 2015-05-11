/*
 * Roman to Integer.h
 *
 *  Created on: 2015Äê5ÔÂ11ÈÕ
 *      Author: Rudy
 */


#include<string>
#include<map>
using namespace std;
class Solution{
	public:
    int romanToInt(string s) {
    	map<string,int> mp = {{"M",1000},{"CM",900},{"D",500},
    			{"CD",400},{"C",100},{"XC",90},{"L",50},{"XL",40},{"X",10},
				{"IX",9},{"V",5},{"IV",4},{"I",1}};
    	int res = 0;
    	for(int i=0;i<s.length();i++){
    		if(i+2<=s.length()+1){
    			auto iter = mp.find(s.substr(i,2));
    			if(iter!=mp.end()){
    				res += iter->second;
    				i++;
    				continue;
    			}
    		}
    		auto iter = mp.find(s.substr(i,1));
    		res += iter->second;
    	}
    	return res;

    }

};


