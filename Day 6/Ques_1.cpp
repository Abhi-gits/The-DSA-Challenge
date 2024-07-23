// Platform: Leetcode 
// Title : Maximum Points You Can Obtain from Cards
// Link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

// solution 


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left = 0, right = 0, sum = 0, i, j;
        for(i=0; i<k; i++)
        {
            left += cardPoints[i]; 
        }
        sum = left;
        for (i=k-1, j = cardPoints.size()-1; i >= 0; i--, j--)
        {
            left -= cardPoints[i];
            right += cardPoints[j];
            sum = max(sum, left+right);
        }
        return sum;
    }
    
};