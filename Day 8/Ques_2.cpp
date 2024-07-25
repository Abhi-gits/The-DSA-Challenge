// Platform: LeetCode
// Title : Add Binary
// Link: https://leetcode.com/problems/add-binary/description/


// Solution


class Solution {
public:
    string addBinary(string a, string b) {
        string str="";
        int carry=0;
        int s1 = a.length()-1;
        int s2 = b.length()-1;
        while(s1>=0 || s2>=0 || carry)
        {
            if(s1>=0)
            {       // '0' is used for explicit conversion of char to int
                carry += a[s1--]-'0';
            }
            if(s2>=0)
            {
                carry += b[s2--]-'0';
            }     // '0' is used for explicit conversion of int to char
            str += carry%2+'0';
            carry = carry/2;
        }
        reverse(begin(str), end(str));
        return str;
    }
};