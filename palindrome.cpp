
 #include<bits/stdc++.h>  
   
   
   bool recursive(char *s,int i,int j){
     
    if(i>j)
    return true;
    if(s[i]!=s[j])
    return false;
    return recursive(s,i+1,j-1);
}



bool checkPalindrome(char input[]) {
    // Write your code here
    int si=strlen(input);
  return recursive(input,0,si-1);
 

}
