#include<bits/stdc++.h>
using namespace std;
int countRev (string s)
{
    // your code here
    if(s.length()%2!=0)
    return -1;
    else
    {
   stack<char> stack;
        int c1=0,c2=0;
        for(char S : s){
            if(S=='{'){
            stack.push(S);
             c2++;
            }
            else if(S=='}' && !stack.empty() && stack.top()=='{')
            {
                stack.pop();
                c2--;
            }
            else
            c1++;
        }
        if(c1%2==0)
        c2=c2/2;
        else
        c2=(c2/2)+1;
        if(c1%2==0)
        c1=c1/2;
        else
        c1=(c1/2)+1;
        return c1+c2;
        
}}