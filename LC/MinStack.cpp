#include<iostream>
using namespace std;
#include <stack>

class MinStack {
public:
    stack<int> st;
    stack<int> Mst;  

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(Mst.empty() || val <= Mst.top()){
            Mst.push(val);
        }
    }
    
    void pop() {
        if(!st.empty()){
            if(st.top() == Mst.top()){
                Mst.pop();
            }
            st.pop();
        }
    }
    
    int top() {
      if(st.empty()) throw runtime_error("Stack is empty");
    return st.top();
    }
    
    int getMin() {
        if(Mst.empty()) throw runtime_error("Stack is empty");
    return Mst.top();

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