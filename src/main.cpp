/*
 * main.cpp
 *
 *  Created on: 2015Äê5ÔÂ1ÈÕ
 *      Author: Rudy
 */
#include <iostream>
#include<vector>
#include<string>
#include"Reverse Linked List.h"
using namespace std;
int main(){
	Solution so;
	string s = "";
	vector<int> height ={2,1,3};
	ListNode *h1 = new ListNode(1);
	ListNode *h2 = new ListNode(2);
	h1->next = h2;
	ListNode *h3 = new ListNode(3);
	h2->next = h3;
	ListNode *test = h1;
	while(test!=nullptr){
		cout<<test->val<<endl;
		test = test->next;
	}
	ListNode *res = so.reverseList(h1);
	while(res!=nullptr){
		cout<<res->val<<endl;
		res = res->next;
	}
	return 0;
}



