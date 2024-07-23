// Platform: LeetCode
// Title : Valid Parentheses
// Link: https://leetcode.com/problems/valid-parentheses/description/


// solution

class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(auto& ch:s)
        {
            if(ch == '(' || ch == '{' || ch == '[')
            {
                str.push(ch);
            }
            else {
                if(str.empty() || 
                (ch == ')' && str.top() != '(') || 
                (ch == '}' && str.top() != '{') || 
                (ch == ']' && str.top() != '['))
                {
                    return false;
                }
                str.pop();
            }
        } 
         return str.empty();       
    }
};