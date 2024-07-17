// Platform: Geeksforgeeks
// Title : Chocolate Distribution Problem
// Link: https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1


//Solution: 

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
    //code
        if(n == 0 || m == 0)
            return 0;
            
        sort(a.begin(), a.end()); 
        int temp = INT_MAX;
        int i = 0;
        for (i = 0; i < n-m+1;i++)
        {
            int ans = a[i + m - 1] - a[i];
            if(temp > ans)
            {
                temp = ans;
            }
        }
        return temp;
    }   
};