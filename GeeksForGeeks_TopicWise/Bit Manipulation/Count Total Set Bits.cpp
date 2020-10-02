//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits

int countSetBits(int n)
{
    
    int sum = 0;
    int k = log2(n);
    n += 1;
    
    for(int i=k;i>=0;i--)
    {
        int term = pow(2,i);
        int q = n/term;
        if(q&1)
        {
            sum += (n - (q*term));
        }
        sum += (term*(q/2));
    }
    
    return sum;
    
}


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends