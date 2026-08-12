class Solution {
public:
    bool vowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            return true;
        }
        return false;
    }
  
    string sortVowels(string s) {
      vector<char>vow;
      for(int i=0;i<s.size();i++)
      {
        char ch=tolower(s[i]);
        if(vowel(ch))
        {
            vow.push_back(s[i]);
        }
      }
        sort(vow.begin(),vow.end());
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=tolower(s[i]);
            if(vowel(ch))
            {
                s[i]=vow[j++];
            }
        }
      return s;
    }
};