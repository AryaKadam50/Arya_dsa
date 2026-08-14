class MinStack {
    stack<long long> stk;
    long long mini = LLONG_MAX;
public:
    MinStack() {
    }
    
    void push(int value) {
        if(stk.empty()){
            stk.push(value);
            mini= value;
        }
        else{
            if(value>= mini){
                stk.push(value);
            }
            else{
                stk.push(2LL * value - mini);
                mini= value;
            }
        }
    }
    
    void pop() {
        if(stk.empty()){
            return;
        }    
        if(stk.top()<mini){
            mini = 2LL * mini - stk.top();
            stk.pop();
        }
        else{
            stk.pop();
        }
    }
    
    int top() {
        if(stk.top()<mini){
            return (int)mini;
        }
        else{
            return (int)stk.top();
        }
    }
    
    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */