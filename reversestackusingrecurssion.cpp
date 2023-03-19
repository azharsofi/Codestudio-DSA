void insert(stack<int> &s,int x){
    //base condition
    if (s.empty()) {
      s.push(x);
      return;
    }

    int temp=s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
}



void reverseStack(stack<int> &s) {
    // Write your code here
    //base condition
    if(s.empty())
    return;
    
    
    int num=s.top();
    s.pop();
    reverseStack(s);
    insert(s,num);
}
