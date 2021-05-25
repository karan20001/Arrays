#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here 
    int l=0,h=n-1;
    for(int i=0;i<=h;)
    {
        if(a[i]==0)
        {
            a[i]=a[l];
            a[l]=0;
            l+=1;
            i+=1;
        }
        else if(a[i]==2)
        {
            a[i]=a[h];
            a[h]=2;
            h-=1;
        }
        else
        {
            i+=1;
        }
    }
}
