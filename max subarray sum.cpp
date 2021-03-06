#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int m=arr[0];
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
        if(arr[i]>s)
        {
            s=arr[i];
        }
        else
        {
            s=s;
        }
        if(s>=m)
        {
            m=s;
        }
        else continue;
    }
    
    return m;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
