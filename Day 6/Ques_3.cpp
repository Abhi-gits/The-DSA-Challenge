
// Platform: Geekforgeeks 
// Title : Remove all duplicates from a given string
// Link: https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
// solution 


class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    vector<char> vec;
        for(int i = 0; i < str.length(); i++)
        {
            if(find(vec.begin(), vec.end(), str[i]) == vec.end())
            {
                vec.push_back(str[i]);
            }
            
        }
        string newstr;
        for(int i = 0; i < vec.size(); i++)
        {
            newstr += vec[i];
            // cout<<vec[i];
        }
        return newstr;
	}
};



