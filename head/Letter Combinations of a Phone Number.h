/*
 * Letter Combinations of a Phone Number.h
 *
 *  Created on: 2015年5月17日
 *      Author: Rudy
 */

#ifndef LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
#define LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
#include <vector>
#include<string>
using namespace std;
class Solution {
public:
	string str[10]{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
    	//vector<string> res = dfs(digits);
    	vector<string> res;
    	string path;
    	dfs(digits,0,path,res);
    	return res;
    }
private:
    //简单深搜 ，倒递归
    vector<string> dfs(string digits){
    	vector<string> res;
    	if(digits.size()==0) return res;
    	if(digits.size()==1){
    		string stt = str[digits[0]-'0'];
    		for(size_t i=0;i<stt.size();i++){
    			res.push_back(stt.substr(i,1));
    		}
    		return res;
    	}
    	vector<string> vc = dfs(digits.substr(0,digits.size()-1));
    	string s = str[digits[digits.size()-1]-'0'];
    	for(size_t i=0;i<vc.size();i++){
    		string ss = vc[i];
    		for(size_t j=0;j<s.size();j++){
    			res.push_back(ss+s[j]);
    		}
    	}
    	return res;
    }
    //方法二 递归方法二
     void dfs(string &digits,size_t size,string path,vector<string> &res){
    	if(size==digits.size()){
    		res.push_back(path);
    		return;
    	}
    	for(auto c:(str[digits[size]-'0'])){
    		dfs(digits,size+1,path+c,res);
    	}
    }
};



#endif /* LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_ */
