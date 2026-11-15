class MinStack {
   private:
    stack<long> st;
    stack<long> minSt;

   public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if(minSt.empty() == true || val<=minSt.top()){
            minSt.push(val);
        }
    }

    void pop() {
        if(minSt.top()==st.top()){
            minSt.pop();
        }
        st.pop();
    }

    int top() { return st.top(); }

    int getMin() { return minSt.top(); }
};
