
// Platform: Leetcode 
// Title : Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

// Solution:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        // vector<int> v;
        int j = 1;
        for(i=1; i<nums.size();i++)
        {
            if(nums[i] != nums[i-1])
                {
                    nums[j] = nums[i];
                    j++;
                }
        }
        return j;
    }
};