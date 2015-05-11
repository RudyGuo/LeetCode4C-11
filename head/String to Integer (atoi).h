/*
 * String to Integer (atoi).h
 *
 *  Created on: 2015Äê5ÔÂ8ÈÕ
 *      Author: Rudy
 */

#ifndef STRING_TO_INTEGER__ATOI__H_
#define STRING_TO_INTEGER__ATOI__H_
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
    	if(s.length() == 0) return 0;
    	string str(s,s.find_first_not_of(" "));
    	string stt;
    	//cout<<str<<endl;
    	if(str.size()==0){
    		return 0;
    	}
    	bool b = (str[0]=='-'||str[0]=='+'||(str[0]<='9'&&str[0]>='0'));
    	if(((str[0]=='-'||str[0]=='+')&&str.size()==1)||!b) return 0;
    	int sgn = str[0]=='-'?-1:1;
    	int start = (str[0]=='-'||str[0]=='+')?1:0;
    	long res = 0;
    	for(int i=start;i<str.length();i++){
    		if(str[i]>'9'||str[i]<'0') return sgn*res;
    		res = res*10+(str[i]-'0');
    		if(res>INT_MAX){
    			return sgn>0?INT_MAX:INT_MIN;
    		}
    	}
    	return sgn*res;
    }
};




#endif /* STRING_TO_INTEGER__ATOI__H_ */
