#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to store Next larger elements


vector <long long> nextLargerElement(long long arr[], int n){
    
    stack <long long> s;
    vector <long long> ans;
    for(int i=(n-1);i>=0;i--)
    {
        if(s.empty())
        {
            s.push(arr[i]);
            ans.emplace_back(-1);
        }
        else
        {
            while((!s.empty()) && (s.top() <= arr[i]))
                s.pop();
            if(s.empty())
            {
                s.push(arr[i]);
                ans.emplace_back(-1);
            }
            else
            {
                ans.emplace_back(s.top());
                s.push(arr[i]);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends