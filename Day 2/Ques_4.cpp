
// Platform: Leetcode 
// Title : Container With Most Water
// Link: https://leetcode.com/problems/container-with-most-water/description/



class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1, i=0;
        int sum, j, temp = 0;
        for (j=0; j < height.size(); j++)
        {
            if(height[i] < height[n])
            {
                sum = (n-i) * height[i];
                i++;
            }
            else{
                sum = (n-i) * height[n];
                n--;
            }
            if(temp < sum)
            {
                temp = sum;
            }
        }
        return temp; 
    }
};
