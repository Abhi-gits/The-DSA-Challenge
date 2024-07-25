// Platform: LeetCode
// Title : Valid Palindrome II
// Link: https://leetcode.com/problems/valid-palindrome-ii/description/


// Solution:

class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.length()-1;
        int i = 0, j= n;
        int count = 0;
        while(i<=j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else{
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }
        }
        return true;
    }
    bool isPalindrome(string s, int i, int j)
    {
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};