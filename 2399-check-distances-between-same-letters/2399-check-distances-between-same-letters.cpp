class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,vector<int>>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]].push_back(i);

        }
        for(auto x:m)
        {
            char ch=x.first;
            vector<int>pos=x.second;
            int actual=pos[1]-pos[0]-1;
            int exp=distance[ch-'a'];
            if(actual!=exp)
            {
                return false;
            }
        }
        return true; 
    }
};