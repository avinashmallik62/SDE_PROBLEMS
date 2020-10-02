#include<bits/stdc++.h>
using namespace std;

void permutation(string S);

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		permutation(S);
		cout<<endl;
	
	}
	return 0;
}// } Driver Code Ends

set <string> s;
void permute(string a, int l, int r)  
{  
    if (l == r)  
        s.insert(a);
    else
    {  
        for (int i = l; i <= r; i++)  
        {  
  
            swap(a[l], a[i]);  
            permute(a, l+1, r);  
            swap(a[l], a[i]);  
        }  
    }  
}  
//Complete this function
void permutation(string S)
{
    
    sort(S.begin(),S.end());
    int n = S.length() - 1;
    permute(S,0,n);
    
    for(auto it : s)
        cout<<it<<" ";
        
    s.clear();
    
}