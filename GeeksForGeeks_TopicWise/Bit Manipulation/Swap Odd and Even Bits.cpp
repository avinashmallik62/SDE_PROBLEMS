//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
	
	int k = log2(n);
	int ans = 0;
	if(k%2 == 0) // odd number of bits
	{
	    for(int i=k+1;i>=1;i-=2)
	    {
	        int left_bit_mask = (1<<(i-1));
	        if(left_bit_mask&n)
	            ans = ans | (left_bit_mask<<1);
	        int right_bit_mask = (1<<i);
	        if(right_bit_mask&n)
	            ans = ans | (right_bit_mask>>1);
	    }
	}
	else
	{
	    for(int i=k;i>=1;i-=2)
	    {
	        int left_bit_mask = (1<<(i-1));
	        if(left_bit_mask&n)
	            ans = ans | (left_bit_mask<<1);
	        int right_bit_mask = (1<<i);
	        if(right_bit_mask&n)
	            ans = ans | (right_bit_mask>>1);
	    }
	}
	
	return ans;
	
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n;
		cin>>n;
		cout << swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends