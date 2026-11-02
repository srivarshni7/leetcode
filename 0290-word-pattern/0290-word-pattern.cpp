class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>str;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else
            {
                str.push_back(temp);
                temp="";
            }
        }
        str.push_back(temp);
        if(pattern.size()!=str.size())
        {
            return false;
        }
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        for(int i=0;i<pattern.size();i++)
        {
            string s=str[i];
            char ch=pattern[i];
            if(mp1.count(ch)&&mp1[ch]!=s)//if we are checking without count it automaticlly assign key and null or space so use count first
            {
                return false;
            }
            if(mp2.count(s)&&mp2[s]!=ch)
            {
                return false;
            }
            mp2[s]=ch;
            mp1[ch]=s;

        }
        return true;
    }
};