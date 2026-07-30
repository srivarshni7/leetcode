class Solution {
public:
    string stringHash(string s, int k) {
        vector<string>words;
        string alpha="abcdefghijklmnopqrstuvwxyz";
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            temp+=s[i];
            if(temp.size()==k)
            {
                words.push_back(temp);
                temp="";
            }
        }
        string ans="";
        for(auto word:words)
        {
            int sum=0;
            for(auto i:word)
            {
                sum+=i-'a';
            }
            ans+=alpha[sum%26];
        }
        return ans;
        
    }
};