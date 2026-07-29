class MyQueue {
public:
    stack<int>a,b;
    
    MyQueue() {
        
    }
    void push(int x) {
        a.push(x);    
    }
    int pop() {
        if(b.empty())
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }
        int val=b.top();
        b.pop();
        return val;
    }
    
    int peek() {
         if(b.empty())
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }
        int val=b.top();
        return val;
        
    }
    
    bool empty() {
        return a.empty()&&b.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */