class Solution {
public:
    string reverseWords(string s) {
        vector<string>ansa;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                 temp+=s[i];
            }
            else{
                if(!temp.empty()){
                  ansa.push_back(temp);
                  temp="";
                }
            }
        }
        if(!temp.empty())
        {
            ansa.push_back(temp);
        }
        string ans="";
        for(int i=ansa.size()-1;i>=0;i--)
        {
            ans+=ansa[i];
            if(i!=0)
            {
                ans+=' ';
            }
        }
        return ans;    
    }
};