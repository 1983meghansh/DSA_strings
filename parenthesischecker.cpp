#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        for(int i=0;i<x.size();i++)
        {
            char c=x[i];
            if(c=='{' || c=='[' || c=='(')
            s.push(c);
            else if(c=='}')
            {
                if(!s.empty() && s.top()=='{')
                s.pop();
                else 
                return 0;
            }
            else if(c==']')
            {
                if(!s.empty() && s.top()=='[')
                s.pop();
                else
                return 0;
            }
            else if(c==')')
            {
                if(!s.empty() && s.top()=='(')
                s.pop();
                else
                return 0;
            }
        }
        if(s.empty())
        return true;
        else
        return false;
    }

};