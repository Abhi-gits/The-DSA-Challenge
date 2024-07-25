// Platform: LeetCode
// Title : Maximum Product Subarray
// Link: https://leetcode.com/problems/maximum-product-subarray/description/


// Solution:

class Solution {
public:
  int maxProduct(vector<int>& A) {
    int n = A.size();
    double ans = INT_MIN;
    double pr = 1, su = 1;
    for (int i=0; i<n; ++i) {
      pr *= A[i];
      su *= A[n-1-i];
      ans = max({ans, pr, su});
      if (pr == 0) pr = 1;
      if (su == 0) su = 1;
    }
    return ans;
  }
};


// Python 

class Solution:
   def maxProduct(self, nums: List[int]) -> int:
        max_prod = -11
        prod1, prod2 = 1, 1
        size = len(nums)

        for i in range(0, size):
            j = size - i - 1
            prod1 *= nums[i]
            max_prod = max(prod1, max_prod)
            if prod1 == 0:
                prod1 = 1
            prod2 *= nums[j]
            max_prod = max(prod2, max_prod)
            if prod2 == 0:
                prod2 = 1
        return max_prod