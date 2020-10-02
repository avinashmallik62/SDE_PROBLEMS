//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to conver given N Gray to Binary
int grayToBinary(int n)
{
    int ans = 0;
    while(n)
    {
        ans ^= n;
        n >>= 1;
    }
    
    return ans;
    
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       cout<< grayToBinary(n)<<endl;
    }
}
  // } Driver Code Ends