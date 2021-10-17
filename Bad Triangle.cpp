#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,j,cnt,first,a[100001];

    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++) cin>>a[i];

        if(a[0]+a[1]<=a[n-1]) cout<<"1 2 "<<n<<endl;
        else cout<<-1<<endl;


    }

    return 0;
}
