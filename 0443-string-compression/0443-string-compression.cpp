class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int index=0;
        vector<int>ans;
        while(i<chars.size())
        {
            char curr=chars[i];
            int count=0;
            while(i<chars.size()&&chars[i]==curr)
            {
                count++;
                i++;
            }
            chars[index++]=curr;
            if(count>1)
            {
                string counts=to_string(count);
                for(auto x:counts)
                {
                    chars[index++]=x;
                }
            }
            
        }
       return  index;
        
    }
};
