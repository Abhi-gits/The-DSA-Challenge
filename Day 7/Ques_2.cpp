
// Platform: LeetCode
// Title : Maximum Product of Three Numbers
// Link: https://leetcode.com/problems/maximum-product-of-three-numbers/description/


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum, prod;
        int n = nums.size();
        sum = nums[n-1] * nums[n-2] * nums[n-3];
        prod = nums[0] * nums[1] * nums[n-1];
        return max(sum, prod);
    }
};

