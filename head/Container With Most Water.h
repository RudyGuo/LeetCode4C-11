/*
 * Container With Most Water.h
 *
 *  Created on: 2015Äê5ÔÂ10ÈÕ
 *      Author: Rudy
 */

#ifndef CONTAINER_WITH_MOST_WATER_H_
#define CONTAINER_WITH_MOST_WATER_H_
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
    	if(height.size()<2) return 0;
    	int  left = 0,right = height.size()-1;
    	int weigh = height.size() - 1;
    	int res = 0;
    	while(left<right){
    		res = max(min(height[right],height[left])*weigh,res);
    		if(height[left]<=height[right]){
    			int cmp = height[left];
    			weigh--;
    			while(height[++left]<cmp){
    				weigh--;
    			}
    		}else{
    			int cmp = height[right];
    			weigh--;
    			while(height[++right]<cmp){
    				weigh--;
    			}
    		}
    	}
    	return res;
    }
};




#endif /* CONTAINER_WITH_MOST_WATER_H_ */
