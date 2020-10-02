#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
int h(char c)
{
    if(c == '(')
        return 1;
    if(c == ')')
        return -1;
    if(c == '{')
        return 2;
    if(c == '}')
        return -2;
    if(c == '[')
        return 3;
    if(c == ']')
        return -3;
}
bool ispar(string x)
{
    stack <int> s;
    for(char c : x)
    {
        if(h(c) < 0)
            {
                if(s.empty())
                    return false;
                if(s.top() + h(c) != 0)
                    return false;
                s.pop();
            }
        else
            s.push(h(c));
    }
    
    return (s.empty()?true:false);
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends