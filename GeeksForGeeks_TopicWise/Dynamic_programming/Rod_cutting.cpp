// link for question: https://practice.geeksforgeeks.org/problems/rod-cutting/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int price[n+1]; for(int i=1;i<=n;i++) cin>>price[i];
	    int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n;j++){
	            if(j<=i)
	            dp[i]=max(dp[i],dp[i-j]+price[j]);
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}