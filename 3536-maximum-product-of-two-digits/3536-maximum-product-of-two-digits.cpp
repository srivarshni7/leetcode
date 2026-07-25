class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n>0)
        {
            arr.push_back(n%10);
            n/=10;
        }
        int maxi=INT_MIN;
        int pro=1;
        for(int i=0;i<arr.size();i++)
        {
           for(int j=i+1;j<arr.size();j++)
           {
            pro=arr[i]*arr[j];
            maxi=max(maxi,pro);
           }
        }
        return maxi;
        
    }
};