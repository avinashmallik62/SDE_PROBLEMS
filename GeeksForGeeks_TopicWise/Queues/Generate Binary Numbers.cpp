#include<bits/stdc++.h>
using namespace std;
#define ll long long


 // } Driver Code Ends


// Function to print all binary numbers upto n

vector<string> generate(ll n)
{
	
	vector <string> ans;
	for(int i=1;i<=n;i++)
	{
	    string temp = "";
	    stack <int> s;
	    ll h = i;
	    while(h != 0)
	    {
	        s.push(h%2);
	        h >>= 1;
	    }
	    while(!s.empty())
	    {
	        temp += (s.top() + '0');
	        s.pop();
	    }
	    ans.emplace_back(temp);
	}
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends