#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,x,y,n;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y>>n;

        ll p= max(x,a-n);

        ll q =max(y,b-n);

        ll k=max(b-n+a-p,y);

        ll l=max(a-n+b-q,x);

        ll ans =min(p*k,q*l);

        cout<<ans<<endl;
    }

    return 0;
}

