class MinStack {
public:
stack<int>st;
stack<int>hel;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(hel.size() ==0 || val < hel.top()){
            hel.push(val);
        }else{
            hel.push(hel.top());
        }
        
    }
    
    void pop() {
        st.pop();
        hel.pop();

        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return hel.top();
       
      
        
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