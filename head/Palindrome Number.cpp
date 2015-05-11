/*
 * Palindrome Number.cpp
 *
 *  Created on: 2015Äê5ÔÂ8ÈÕ
 *      Author: Rudy
 */

#ifndef PALINDROME_NUMBER_CPP_
#define PALINDROME_NUMBER_CPP_
#include<climits>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long res = 0;
        while(x>res){
        	res = res*10+x%10;
        	if(res>INT_MAX);
        	x = x/10;
        }
        return res==x;
    }
};




#endif /* PALINDROME_NUMBER_CPP_ */
