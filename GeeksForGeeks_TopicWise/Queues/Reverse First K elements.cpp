//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue <ll> modifyQueue(queue<ll> q, int k)
{
    stack <ll> temp;
    queue <ll> r;
    while(k--)
    {
        temp.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        r.push(q.front());
        q.pop();
    }
    while(!temp.empty())
    {
        q.push(temp.top());
        temp.pop();
    }
    while(!r.empty())
    {
        q.push(r.front());
        r.pop();
    }
    return q;
}