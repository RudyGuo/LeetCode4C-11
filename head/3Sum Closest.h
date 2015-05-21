/*
 * 3Sum Closest.h
 *
 *  Created on: 2015Äê5ÔÂ21ÈÕ
 *      Author: Rudy
 */
/*Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

    For example, given array S = {-1 2 1 -4}, and target = 1.

    The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).*/
#include <vector>
#include<algorithm>
#include<set>
#include<climits>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    	if(nums.size()<3) return -1;
    	int res = -1;
    	int cmpRes= INT_MAX;
    	sort(nums.begin(),nums.end());
    	for(size_t i=0;i<nums.size();i++){
    		int cmp = target-nums[i];
    		size_t left =0, right = nums.size()-1;
    		size_t lastLeft = left, lastRight = right;
    		while(left<right){
    			lastLeft = left;
    			lastRight = right;
    			if(left==i){
    				left++;
    				continue;
    			}else if(right == i){
    				right--;
    				continue;
    			}
    			if(nums[left]+nums[right]<cmp){
    				left++;
    			}else if(nums[left]+nums[right]>cmp){
    				right--;
    			}else{
    				return target;
    			}
    		}
    		lastLeft==i?lastLeft--:0;
    		lastRight==i?lastRight++:0;
    		if(abs((int)(nums[lastLeft]+nums[lastRight]-cmp))<cmpRes){
    			res = nums[lastLeft]+nums[lastRight]-cmp+target;
    			cout<<i<<" "<<lastLeft<<" "<<lastRight<<"  "<<res<<endl;
    			cmpRes = abs((int)(nums[lastLeft]+nums[lastRight]-cmp));
    		}
    	}
    	return res;
    }
};
