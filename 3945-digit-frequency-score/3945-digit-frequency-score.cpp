class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        map<int,int>sc;
        while(n>0)
        {
            int digit=n%10;
            sc[digit]++;
            n/=10;
        }

       for(auto x:sc)
       {
        sum+=x.first*x.second;
       }
        return sum;
        
    }
};