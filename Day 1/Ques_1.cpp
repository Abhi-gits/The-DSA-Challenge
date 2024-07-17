// Platform: Leetcode 
// Title : Move Zeroes
// Link: https://leetcode.com/problems/move-zeroes/description/

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i, j = 0, temp;
        for(i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j++;
            } 
        }
    }
};

