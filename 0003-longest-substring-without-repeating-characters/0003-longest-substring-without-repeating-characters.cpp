class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int j=0,maxlen=0;
       unordered_set<char>st;
       for(int i=0;i<s.size();i++)
       {
            if(!(st.count(s[i]))) //first time
            {
                st.insert(s[i]);
                maxlen=max(maxlen,i-j+1);
            }
            else
            {
                while(st.count(s[i]))
                {
                    st.erase(s[j]);
                    j++;
                }
                st.insert(s[i]);
            }
       }
        return maxlen;
    }
};                