// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    
    // Input:
    // 2
    // 231*+9-
    // 123+*8-
    // Output:
    // -4
    // -3
    
    stack <int> s;
    for(char c : str)
    {
        if(isdigit(c))
        {
            s.push((c-'0'));
        }
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            if(c == '+')
                s.push(a+b);
            if(c == '-')
                s.push(a-b);
            if(c == '*')
                s.push(a*b);
            if(c == '/')
                s.push(a/b);
        }
    }
    int ans = s.top();
    s.pop();
    return ans;
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends