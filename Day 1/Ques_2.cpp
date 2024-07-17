// Platform: Leetcode 
// Title : Two Sum
// Link: https://leetcode.com/problems/two-sum/description/

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

//Solution :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            for(int k=i+1; k<n; k++)
            {
                if((nums[i] + nums[k]) == target)
                {
                    return {i,k};
                }
            }
        }
        return {};
    }
};