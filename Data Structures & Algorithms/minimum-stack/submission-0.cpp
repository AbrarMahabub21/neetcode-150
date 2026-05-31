class MinStack {
public:
stack <int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty())st.pop();
    }
    
    int top() {
        if(!st.empty())return st.top();
    }
    
    int getMin() {
        
        stack <int>s(st);
        int minVal = s.top();
        while(!s.empty()){
         minVal = min(minVal, s.top());
         s.pop();
        }
         return minVal;
    }
};
