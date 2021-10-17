#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10001],i;
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    int maxi=arr[n-1]+1;

    int rem = maxi-arr[0];

    int res=rem-n;

    cout<<res<<endl;

    return 0;
}
