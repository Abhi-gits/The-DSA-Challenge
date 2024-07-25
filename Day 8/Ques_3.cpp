

// Platform: LeetCode
// Title : Minimum Moves to Equal Array Elements II
// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/


 


// Solution

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int temp = nums[n/2];
        int count = 0, sum;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < temp)
            {
                sum = temp-nums[i];
                count += sum;
            }
            else{
                sum = nums[i] - temp;
                count += sum;
            }
        }
        return count;
    }
};
