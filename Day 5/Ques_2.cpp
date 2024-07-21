// Platform: Leetcode 
// Title : Find the Index of the First Occurrence in a String
// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

// solution 


class Solution {
public:
    int strStr(string haystack, string needle) {
        int count=0;
        int s1 = haystack.length();
        int s2 = needle.length();
        for (int i = 0; i < s1; i++)
        {
            if(haystack[i] == needle[count])
            {
                count++;
            }
            else
            {
                i = i - count;
                count = 0;
            }
            if(count == s2)
            {
                return i-s2+1;
            }
        }
        return -1;
    }
};