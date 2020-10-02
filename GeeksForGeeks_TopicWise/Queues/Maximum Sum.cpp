//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++

bool compare(pair <int,int> a, pair <int,int> b)
{
    if(a.second == b.second)
        return (a.first > b.first);
    return (a.second > b.second);
}

long maximum_sum(vector<int>v,int k)
{
    unordered_map <int,int> mp;
    for(auto it : v)
        mp[it] += 1;
    
    priority_queue<pair<int,int>> pq;
    for(auto itr: mp){
        pq.push({itr.second, itr.first});
    }
    long res = 0;
    for(int i=1;i<=k;i++)
    {
        pair<int,int> p = pq.top();
        res += p.second;
        pq.pop();
        pq.push({p.first-1, p.second});
    }
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        cout<< maximum_sum(v,k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends