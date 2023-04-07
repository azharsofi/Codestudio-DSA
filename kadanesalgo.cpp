#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long s=0;
    long long m=0;
    for (int i = 0; i < n; i++) {
      s = s + arr[i];
      m = max(s, m);
      if (s < 0)
        s = 0;
    }
    return m;



}
