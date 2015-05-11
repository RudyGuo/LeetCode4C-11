/*
 * Reverse_Integer.cpp
 *
 *  Created on: 2015Äê5ÔÂ7ÈÕ
 *      Author: Rudy
 */
#include<climits>
class Solution {
public:
    int reverse(int x) {
        int sgn = x>=0?1:-1;
        long long res =0;
        x = sgn*x;
        while(x>0){
        	res = res*10+x%10;
        	if(res>INT_MAX) return 0;

        	x = x/10;
        }
        return sgn*res;
    }
};


