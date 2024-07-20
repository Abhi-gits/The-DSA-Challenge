// Platform: Leetcode 
// Title : Majority Element
// Link: https://leetcode.com/problems/majority-element/description/

// Solution:


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n =nums.size();
        unordered_map<int, int> vec;
        int i;
        for(i = 0; i< nums.size(); i++)
        {
            vec[nums[i]]++;
        }
        for (auto& it:vec)
        {
            if(it.second > (n/2))
            {
                return it.first;
            }
        }
        return 0;
    }    
};




// Other approach in python 

// class Solution:
//     def majorityElement(self, nums: List[int]) -> int:
//         nums.sort()
//         n = len(nums)
//         return nums[n//2]