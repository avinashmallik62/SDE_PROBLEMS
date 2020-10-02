#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int josephus(int n, int k)
{
   
    int initial_index = 0;
    vector <int> vec;
    for(int i=1;i<=n;i++)
        vec.push_back(i);
    
    while(vec.size() != 1)
    {
        initial_index = (initial_index + k - 1)%vec.size();
        vec.erase(vec.begin() + initial_index);
    }
    
    return vec[0];
   
}
