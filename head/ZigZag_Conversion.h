/*
 * ZigZag_Conversion.h
 *
 *  Created on: 2015Äê5ÔÂ7ÈÕ
 *      Author: Rudy
 */

#ifndef ZIGZAG_CONVERSION_H_
#define ZIGZAG_CONVERSION_H_
#include<string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
    	if(numRows<=1||s.size()<=1) return s;
    	string res;
    	for(int i=0;i<numRows;i++){
    		if(i==0||i==numRows-1){
    			for(int c =i;c<s.length();c+=2*numRows-2){
    				res += s[c];
    			}
    		}else{
    			bool cg = true;
    			for(int c=i;c<s.length();){
    				res +=s[c];
    				if(cg){
    					c += 2*(numRows-i-1);
    				}else{
    					c += 2*i;
    				}
    				cg =!cg;
    			}
    		}
    	}
    	return res;
    }
};




#endif /* ZIGZAG_CONVERSION_H_ */
