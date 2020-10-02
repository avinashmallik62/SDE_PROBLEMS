//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

 // } Driver Code Ends


//User function Template for C++
#include<bits/stdc++.h>

// function to check if the number is sparse
// n : is the number to check if it is sparse
bool isSparse(int n){
    
    int k = log2(n),mask = (1<<k);
    int flag = ((n&mask)?1:0);
    // cout<<flag<<" ";
    for(int i=k-1;i>=0;i--)
    {
        mask = (1<<i);
        if(flag == ((n&mask)?1:0))
            {
                if(flag == 1)
                    return false;
            }
        flag = ((n&mask)?1:0);
        // cout<<flag<<" ";
    }
    return true;
}


// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        if(isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends