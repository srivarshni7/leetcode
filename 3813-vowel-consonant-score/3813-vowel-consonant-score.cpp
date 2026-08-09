class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowels=0;
        int consonants=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
        }
        if(consonants>0)
        {
            return floor(vowels/consonants);
        }
        return 0;
    }
};