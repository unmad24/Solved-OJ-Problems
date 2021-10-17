#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll n,arr[1001],i;
     cin>>n;
     ll right=0;
     ll left=0;
     for(i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]>0) right+=arr[i];
     else left+=arr[i];
     }

     cout<<right-left<<endl;
     return 0;

}
