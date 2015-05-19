/*
 * main.cpp
 *
 *  Created on: 2015Äê5ÔÂ1ÈÕ
 *      Author: Rudy
 */
#include <iostream>
#include<vector>
#include<string>
#include"3Sum.h"
using namespace std;
int main(){
	Solution so;
	vector<int> vc = {1,1,1};
	vector<vector<int>> res = so.threeSum(vc);
	cout<<res.size()<<endl;
	for(vector<int> tmp:res){
		for(auto it:tmp){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}



