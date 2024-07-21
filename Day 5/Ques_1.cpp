// Platform: Leetcode 
// Title : Subarray Sum Equals K
// Link: https://leetcode.com/problems/subarray-sum-equals-k/

// solution 


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> vec;
        int count = 0;
        int sum = 0;
        vec[0] = 1;
        for (int num : nums)
        {
            sum += num;
            int temp = sum - k;
            if(vec.find(temp) != vec.end())
            {
                count += vec[temp];
            }
            vec[sum]++;
        }
        return count;
    }
};