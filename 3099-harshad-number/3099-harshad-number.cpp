class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x;
        int sum=0;
        while(x!=0)
        {
            int digit=x%10;
            sum+=digit;
            x/=10;
        }
        if(temp%sum==0)
        {
            return sum;
        }
        return -1;
    }
};