class MyStack {
    private:
        int arr[100];
        int topElement;
    
    public:
    
    MyStack() {
        for(int i=0;i<100;i++){
            arr[i] = 0;
        }
        topElement = 0;
    }
    
    void push(int x) {
        arr[topElement] = x;
        topElement++;
    }
    
    int pop() {
        
        return arr[--topElement];
    }
    
    int top() {
        return arr[topElement-1];
    }
    
    bool empty() {
        return (topElement-1) ? 1:0;
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