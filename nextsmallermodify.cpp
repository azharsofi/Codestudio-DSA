#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(arr[n-1]);
    vector<int> ans(n);
    ans.push_back(-1);
    for(int i=n-2;i>=0;i--){
        int curr=arr[i];
        while(!s.empty()&&s.top()>=curr){
            s.pop();
        }
        int sm=(s.empty())?-1:s.top();
        ans.push_back(sm);
        s.push(curr);
    }

    reverse(ans.begin(),ans.end());
    return ans;

}
