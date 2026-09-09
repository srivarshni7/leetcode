class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       set<string>s;
       for(auto email:emails)
       {
        int pos=email.find('@');
        string local=email.substr(0,pos);
        string domain=email.substr(pos);
        string clean="";
        for(auto x:local)
        {
            if(x=='.')
            {
                continue;
            }
            else if(x=='+')
            {
                break;
            }
            else
            {
                clean+=x;
            }
        }
        string actual=clean+domain;
        s.insert(actual);
       }
     return s.size(); 
        
    }
};