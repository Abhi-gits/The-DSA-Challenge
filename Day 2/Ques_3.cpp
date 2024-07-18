// Platform: Leetcode 
// Title : Find All Duplicates in an Array
// Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/


//Solution: 

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        vector<int> vec;
        for(i = 0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};