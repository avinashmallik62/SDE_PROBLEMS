// Question link: https://practice.geeksforgeeks.org/problems/trapping-rain-water/0


#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;

lld min(lld a, lld b){
    return a<b?a:b;
}


int main(){
    
    lld t; cin>>t;
    while(t--){
        lld n; cin>>n;
        lld arr[n+2]={0};
        for(lld i=1;i<=n;i++) cin>>arr[i];
        lld left_max[n+2]={0};
        lld prev = arr[0];
        for(lld i=0;i<=n+1;i++){
            if(prev<arr[i]){
                prev=arr[i];
            }
            left_max[i]=prev;
        }
        lld right_max[n+2]={0};
        prev=arr[n+1];
        for(lld i=n+1;i>=0;i--){
            if(prev<arr[i]){
                prev=arr[i];
            }
            right_max[i]=prev;
        }
        lld total=0;
        for(lld i=1;i<=n;i++){
            if(arr[i]<=left_max[i-1]&&arr[i]<=right_max[i+1]){
                total+=min(left_max[i-1],right_max[i+1])-arr[i];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}