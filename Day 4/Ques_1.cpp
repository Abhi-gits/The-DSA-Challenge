// Platform: Leetcode 
// Title : Subarray Sums Divisible by K
// Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

// Solution:

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int, int> m;
        int count = 0;
        int sum = 0;
        m[0] = 1;

        for (int num : nums)
        {
            sum += num;
            int mod = sum % k;

            if (mod < 0)
            {
                mod += k;
            }
            if ( m.find(mod) != m.end())
            {
                count += m[mod];
                m[mod] += 1;
            }
            else{
                m[mod] = 1;
            }

        }
        return count;
    }
};




