class Solution {
public:
    string reverseStr(string s, int k) {
       for(int i=0; i<s.size(); i+=2*k)
       {
        int left=i;   
        int right=min(i+k-1,(int)s.size()-1);//avoid out of bound
        reverse(s.begin()+left,s.begin()+right+1);//end will take upto -1 only syntax
       }
       return s; 
    }
};
//i+=2*k
//i=0->i=0+2*2->i=4
//i=1->i=4+2*2->i=8...