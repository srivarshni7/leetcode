class Solution {
public:
    string decodeString(string s) {
        
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            string temp="";
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else 
            {
                while(!st.empty()&&st.top()!='[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();//remove[
                string num="";
                while(!st.empty()&&isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                int repeat=stoi(num);
                string expanded="";
                while(repeat--)
                {
                    expanded+=temp;
                }
                for(int i=0;i<expanded.size();i++)
                {
                    st.push(expanded[i]);
                }
                
            }
        }
            string ans="";
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;  
    }
};