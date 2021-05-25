#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int c=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(arr1[n-i]>arr2[i-1])
	        {
	            int t=arr1[n-i];
	            arr1[n-i]=arr2[i-1];
	            arr2[i-1]=t;
	            c++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    
	    for(int i=0;i<c;i++)
	    {
	        int f=arr2[0];
	        for(int j=1;j<m;j++)
	        {
	            if(f>=arr2[j])
	            {
	                arr2[j-1]=arr2[j];
	                arr2[j]=f;
	            }
	            else
	            {
	                break;
	            }
	        }
	    }
	    for(int i=0;i<c;i++)
	    {
	        int d=arr1[n-1];
	        for(int j=n-2;j>=0;j--)
	        {
	            if(d<arr1[j])
	            {
	                arr1[j+1]=arr1[j];
	                arr1[j]=d;
	            }
	        }
	    }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
