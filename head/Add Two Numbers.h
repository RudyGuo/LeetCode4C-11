/*
 * Add Two Numbers.h
 *
 *  Created on: 2015��5��1��
 *      Author: Rudy
 */

struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x) :
			val(x), next(nullptr) {
	}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode head(-1);
		ListNode *cursor = &head;
		int tp =0;
		while(l1!=nullptr||l2!=nullptr){
			int x = l1!=nullptr?l1->val:0;
			int y = l2!=nullptr?l2->val:0;
			tp += x+y;
			cursor->next = new ListNode(tp%10);
			//���ܷ��ؾֲ���������û�ָ�룬������ɺ�ռ�õĴ洢�ռ�Ҳ��֮�ͷŵ���
			//ListNode ln(tp%10);
			//cursor->next = &ln;
			cursor= cursor->next;
			if(l1!=nullptr) l1 = l1->next;
			if(l2!=nullptr) l2 = l2->next;
			tp /= 10;
		}
		if(tp!=0){
			cursor->next = new ListNode(tp);
		}
		return head.next;
	}
};
