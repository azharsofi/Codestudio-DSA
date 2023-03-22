#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n){
stack<int> s;
        s.push(arr[n-1]);
        vector<int>a;
        a.push_back(-1);
        for (long long i = n - 2; i >= 0; i--) {
          while (!s.empty() && s.top() <= arr[i])
            s.pop();
          int gre = (s.empty()) ? (-1) : (s.top());
          a.push_back(gre);
          s.push(arr[i]);
        }
        reverse(a.begin(), a.end());
        return a;

}
