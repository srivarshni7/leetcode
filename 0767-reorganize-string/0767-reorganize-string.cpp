class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>m;
        for(auto x:s)//counting frequency
        {
            m[x]++;
        }
        priority_queue<pair<int,char>>q;//pair{conut,char}
        for(auto x:m)
        {
            q.push({x.second,x.first});
        }
        string ans="";
        pair<int,char>prev={0,'#'};
        while(!q.empty())
        {
            auto current=q.top();//taking the top element 
            q.pop();
            //use current character
            ans+=current.second;
            current.first--;
            if(prev.first>0)//no adjacent character will be same 
            {
                q.push(prev);
            }
            prev=current;
        }
        if(ans.size()!=s.size())
        {
            return "";
        }
        return ans;
    }
};