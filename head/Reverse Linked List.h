/*
 * Reverse Linked List.h
 *
 *  Created on: 2015Äê5ÔÂ16ÈÕ
 *      Author: Rudy
 */

//Reverse a singly linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    	if(head==nullptr) return head;
    	ListNode *lh = nullptr;
    	ListNode *current = head,*nxt = head->next;
    	while(current!=nullptr){
    		current->next = lh;
    		lh = current;
    		current = nxt;
    		if(current==nullptr) break;
    		nxt = nxt->next;
    	}
    	return lh;
    }
};

