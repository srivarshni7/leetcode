class Solution {
public:
    int hIndex(vector<int>& citations) {
       
        for(int i=citations.size();i>=1;i--)
        {
            int count=0;
            for(auto cit:citations)
            {
                if(cit>=i)
                {
                    count++;
                }
            }
            if(count>=i)
            {
                return i;
            }
        }
        return 0;
    }
};