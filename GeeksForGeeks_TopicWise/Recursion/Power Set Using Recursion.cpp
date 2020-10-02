//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
vector <string> powerSet(string s)
{
   
    vector <string> final;
    int s_len = s.length();
    for(int i=1;i<=(pow(2,s_len));i++)
    {
        
        string temp = "";
        int mask;
        for(int j=0;j<s_len;j++)
        {
            mask = 1<<j;
            if(i&mask)
            {
                temp += s[j];
            }
        }
        final.push_back(temp);
        
    }
    sort(final.begin(),final.end());
    
    return final;
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        vector<string> ans = powerSet(s);
        sort(ans.begin(),ans.end());
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends