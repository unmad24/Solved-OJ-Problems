#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll tt,a[1001],i,j,num,h,q;
    cin>>tt;
    while(tt--) {
        cin>>num;
        for(i=0; i<num; i++) {cin>>a[i];}
        for(i=0;; i++) {
            if(a[i]==1) {
                h=i;
                break;
            }
        }
        for(j=num-1;; j--) {
            if(a[j]==1) {
                q=j;
                break;
            }
        }

        ll cont=0;

        for(i=h; i<=q; i++) {
            if(a[i]==0) cont++;
        }

        cout<<cont<<endl;

    }

    return 0;
}
