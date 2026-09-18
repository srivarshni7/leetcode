class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            q.push({abs(x-arr[i]),arr[i]});
        }
        while(k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        } 
        sort(ans.begin(),ans.end());
        return ans;
    }
};