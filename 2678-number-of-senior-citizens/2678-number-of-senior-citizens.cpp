class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++)
        {
            string pass=details[i];
            if(pass[11]-'0'>=6&&pass[12]-'0'>=1||pass[11]-'0'>6&&pass[12]-'0'==0)
            {
                count++;
            }
        }
        return count;
    }
};