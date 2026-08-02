class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>st(candyType.begin(),candyType.end());
        int n=candyType.size()/2;
        if(st.size()<n)        {
            return st.size();
        }
        return n;
        
    }
};