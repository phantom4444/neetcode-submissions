class MinStack {
private:
    stack <int> st;
    stack <int> minSt;

public:
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            minSt.push(val);
        } else {
            if (val <= minSt.top()){
                minSt.push(val);
            }
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top() == minSt.top()){
            st.pop();
            minSt.pop();
        } else {
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
