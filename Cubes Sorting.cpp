
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,k,i,cnt,a[100001];
     cin>>t;
     while(t--){
            ll result=0;
        cin>>n>>k;

        for(i=0;i<n;i++) cin>>a[i];

         sort(a, a+n, greater<int>());

         for(i=0;i<n-1;i++){
            result+=(k-a[i])/a[n-1];
         }

     cout<<result<<endl;

     }

     return 0;

}
