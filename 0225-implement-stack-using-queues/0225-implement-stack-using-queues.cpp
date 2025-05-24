class MyStack {
public:
 vector<int> stack;

//  int t=0;
    MyStack() {
        // sta.resize(10000);
    }
    
    void push(int x) {
        // sta[t]=x;
        // t++;
        stack.push_back(x);
    }
    
    int pop() {
        // int x=sta[t];
        // t--;
        // return x;
        int x=stack.back();
        stack.pop_back();
        return x;
    }
    
    int top() {
        // return sta[t];
     if (stack.empty()) return -1;
        return stack.back();
    }
    
    bool empty() {
        //return t==0;
       return stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */