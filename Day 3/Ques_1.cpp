// Platform: Leetcode 
// Title : Jump Game
// Link: https://leetcode.com/problems/jump-game/description/

// Solution:

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0, reach;
        for (reach = 0; i < nums.size() && i <= reach; ++i)
            reach = max(reach, i + nums[i]);
        return i == nums.size();
    }
};




// Python code

// class Solution:
//     def canJump(self, nums: List[int]) -> bool:

//         max_num = 0
//         for i, val in enumerate(nums):
//             if i <= max_num:
//                 max_num = max(max_num, i+val)
//         return max_num >= len(nums)-1



// code 1

// class Solution {
// public:
//     bool canJump(vector<int>& nums){
//         int n = nums.size();
//         if(n <= 1) return true;
//         int j = 1, i;
//         for(i = n-2;i >= 0;--i)
//         {
//             if(nums[i] >= j)
//             {
//                 j = 1;
//             }
//             else{
//                 j++;
//             }   
//         }
//         return nums[0] >= j; 
//     }
// };


// code 2


// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         if (nums.size() <= 1) return true;

//         int jumpsNeeded = 1; 

//         for (int i = nums.size() - 2; i >= 0; --i) {
//             if (nums[i] >= jumpsNeeded)  jumpsNeeded = 1; 
//             else  jumpsNeeded++; 
//         }
//         return nums[0] >= jumpsNeeded; 
//     }
// };