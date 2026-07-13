class Solution {
public:
    int passwordStrength(string password) {
        sort(password.begin(),password.end());
        vector<int>passwordnew;
        passwordnew.push_back(password[0]);
        for(int i=1;i<password.size();i++)
        {
            if(password[i-1]!=password[i])
            {
                passwordnew.push_back(password[i]);
            }
        }
        int strength=0;
        for(int i=0;i<passwordnew.size();i++)
        {
            if(passwordnew[i]>='a'&&passwordnew[i]<='z')
            {
                strength+=1;
            }
            else if(passwordnew[i]>='A'&&passwordnew[i]<='Z')
            {
                strength+=2;
            }
            else if(passwordnew[i]>='0'&&passwordnew[i]<='9')
            {
                strength+=3;
            }
            else if(passwordnew[i]=='!'||passwordnew[i]=='@'||passwordnew[i]=='#'||passwordnew[i]=='$')
            {
                strength+=5;
            }
        }
        return strength;
        
    }
};