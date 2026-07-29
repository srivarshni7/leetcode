class MinStack {
public:
    stack<int>s;
    stack<int>mins;
    MinStack() {   
    }
    void push(int val) {
        s.push(val);
        if(mins.empty()||val<=mins.top()){
        mins.push(val);
        }   
    }
    void pop() {
       if(!s.empty()&&!mins.empty()&&mins.top()==s.top())
       {
        mins.pop();
        s.pop();
       }
       else if(!s.empty())
       {
        s.pop();
       }
    }
    int top() {
        if(!s.empty()){
         return s.top();
        }
        return -1;     
    }
    int getMin() {
        return mins.top();   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */