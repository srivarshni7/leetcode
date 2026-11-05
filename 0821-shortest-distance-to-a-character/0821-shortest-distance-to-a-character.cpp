class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>ans(n);
        int prev=n;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                prev=i;
            }
            ans[i]=abs(i-prev);
        }
        prev=2*n;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==c)
            {
                prev=i;
            }
            ans[i]=min(abs(i-prev),ans[i]);
        }
    return ans; 
    }
};