#include <bits/stdc++.h>
void solve(stack<int>&inputStack, int c, int N) {
  // base case
  if (c==N / 2){
    inputStack.pop();
  return;
}

int num=inputStack.top();
inputStack.pop();
//recursive call
solve(inputStack,c+1,N);
inputStack.push(num);

}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int c=0;
   solve(inputStack,c,N);
   
}
