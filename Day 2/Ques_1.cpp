// Platform: Leetcode 
// Title : Sort Colors
// Link: https://leetcode.com/problems/sort-colors/description/

// Solution:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, k, temp;
        int j = nums.size() - 1;
        for(i =0; i < j; i++)
        {
            for(k = i+1; k < j+1; k++)
            {
                
                if(nums[i] > nums[k])
                {
                    temp = nums[i];
                    nums[i] = nums[k];
                    nums[k] = temp;
                }
            }
        }  
    }
};