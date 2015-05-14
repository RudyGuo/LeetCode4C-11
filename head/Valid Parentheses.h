/*
 * Valid Parentheses.h
 *
 *  Created on: 2015Äê5ÔÂ14ÈÕ
 *      Author: Rudy
 */

#ifndef VALID_PARENTHESES_H_
#define VALID_PARENTHESES_H_
#include<string>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
    	if(s.length()==0) return false;
    	stack<char> stk;
    	for(int i=0;i<s.length();i++){
    		char c= s[i];
    		if(c=='('||c=='{'||c=='['){
    			stk.push(c);
    			continue;
    		}
    		if(stk.empty()) return false;
    		switch (c){
    		case'}':
    			if(stk.top()!='{') 	return false;
    			break;
    		case']':
    			if(stk.top()!='[') 	return false;
    			break;
    		case')':
    			if(stk.top()!='(') 	return false;
    			break;
    		}
    		stk.pop();
    	}
    	if(!stk.empty()) return false;
    	return true;
    }
};




#endif /* VALID_PARENTHESES_H_ */
