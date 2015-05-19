/*
 * 3Sum.h
 *
 *  Created on: 2015Äê5ÔÂ19ÈÕ
 *      Author: Rudy
 */

/*Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:
Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ¡Ü b ¡Ü c)
The solution set must not contain duplicate triplets.
    For example, given array S = {-1 0 1 2 -1 -4},

    A solution set is:
    (-1, 0, 1)
    (-1, -1, 2)*/

#include <vector>
#include<algorithm>
#include<set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    	vector<vector<int>> res;
    	if(nums.size()<3) return res;
    	sort(nums.begin(),nums.end());
    	set<int> used;
    	set<vector<int>> resUsed;
    	for(size_t i=0;i<nums.size();i++){
    		if(used.find(nums[i])!=used.end()) continue;
    		used.insert(nums[i]);
    		int cmp = -nums[i];
    		size_t left = 0, right = nums.size()-1;
    		while(left<right){
    			if(left==i){
    				left++;
    				continue;
    			}else if(right==i){
    				right--;
    				continue;
    			}
    			if(nums[left]+nums[right]<cmp){
    				left++;
    				while(left<nums.size()&&nums[left-1]==nums[left]) left++;
    			}else if(nums[left]+nums[right]>cmp){
    				right--;
    				while(right>0&&nums[right]==nums[right+1]) right--;
    			}else{
    				vector<int> vc = {-cmp,nums[left],nums[right]};
    				sort(vc.begin(),vc.end());
    				if(resUsed.find(vc)==resUsed.end()){;
						res.push_back(vc);
						resUsed.insert(vc);
    				}
    				left++;
    				while(left<nums.size()&&nums[left-1]==nums[left]) left++;
    				right--;
    				while(right>0&&nums[right]==nums[right+1]) right--;
    			}
    		}
    	}
    	return res;
    }
};

