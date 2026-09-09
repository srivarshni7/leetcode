class Solution {
public:
    bool contains(map<char,int>&ms,map<char,int>&mt)
    {
        for(auto x:mt)
        {
            char ch=x.first;
            int count=x.second;
            if(ms[ch]<count)//checking s map
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        map<char,int>ms;
        map<char,int>mt;
        for(auto x:t)//counting t string alone 
        {
            mt[x]++;
        }
        int left=0;
        int minlen=INT_MAX;
        int minstart=0;
        for(int right=0;right<s.size();right++)
        {
            ms[s[right]]++;
            while(contains(ms,mt))//all inside while loop
            {
                if(right-left+1<minlen)//save smallest window
                {
                    minlen=right-left+1;
                    minstart=left;
                }
                //no smallest remove left character
                ms[s[left]]--;
                left++;
            }
        }
        if(minlen==INT_MAX)
        {
            return "";
        }
        return s.substr(minstart,minlen);
        
    }
};