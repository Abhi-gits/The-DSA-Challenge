
// Platform: LeetCode
// Title : Reverse Words in a String
// Link: https://leetcode.com/problems/reverse-words-in-a-string/description/


// Solution

class Solution {
public:
    string reverseWords(string s) {
        // solution using two pointer
        int n = s.length();
        int i = n-1, j = n-1;
        string str;
        while(i>=0)
        {
            if(s[i] == ' ')
            {
                if(i!=j)
                {    // make a new string with adding the last string at first position
                    str = str+s.substr(i+1, j-i)+' ';
                }
                i--; j=i;
            }
            else i--;
        }
        // adding the first word at last position
        if(i!=j)
        {
            str = str+s.substr(i+1, j-i);
        } // to rmove any trailing spaces at last
        else if(str.back() == ' ')
        {
            str.pop_back();
        }
        return str;
    }
};