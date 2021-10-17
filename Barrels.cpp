#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,k,i,j,largest;

     cin>>t;
     while(t--){
        cin>>n>>k;
        ll arr[n+2];
        ll sum=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        sum+=arr[i];}

        sort(arr,arr+n);

        if(k==n-1) cout<<sum<<endl;
        else{
            largest=arr[n-1];
            j=n-2;
            for(i=1;i<=k;i++){
                largest+=arr[j];
                j--;
            }
            cout<<largest<<endl;
        }

     }

     return 0;

}
