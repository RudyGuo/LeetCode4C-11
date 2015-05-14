/*
 * Remove Nth Node From End of List.h
 *
 *  Created on: 2015Äê5ÔÂ14ÈÕ
 *      Author: Rudy
 */

#ifndef REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    	if(head==nullptr) return head;
    	ListNode *fast = head;
    	ListNode *slow = head;
    	while(n-->0){
    		fast = fast->next;
    	}
    	if(fast==nullptr) return head->next;
    	while(fast->next!=nullptr){
    		fast = fast->next;
    		slow = slow->next;
    	}
    	slow->next = slow->next->next;
    	return head;
    }
};




#endif /* REMOVE_NTH_NODE_FROM_END_OF_LIST_H_ */
