#include <bits/stdc++.h> 
class TwoStack {
    int *a;
    int t1;
    int t2;
    int size;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size=s;
        t1=-1;
        t2=size;
        a=new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(t2-t1>1){
            a[++t1]=num;
        }

    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(t2-t1>1){
            a[--t2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
    if(t1>=0){
        int ans=a[t1];
        t1--;
        return ans;
    }
    else
    return -1;

    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(t2<size){
            int ans=a[t2];
            t2++;
            return ans;
        }
        else
        return -1;
    }
};
