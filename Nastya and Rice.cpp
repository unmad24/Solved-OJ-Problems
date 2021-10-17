#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,a,b,c,d,x,y,z,p,q,r,s,t,i,chk;

    cin>>t;
    while(t--) {
        chk=1;
        cin>>n>>a>>b>>c>>d;

        x = n*(a-b);
        y = n*(a+b);
        p = c+d;
        q = c-d;

        if(y<q or p<x)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;

    }

    return 0;

}
