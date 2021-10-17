#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll i,t,n,j,r;
    cin>>t;
    while(t--) {
        cin>>n;
        ll arr[n+1];
        ll maxx=0;
        for(i=0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]>maxx) maxx=arr[i];
        }
        for(i=0; i<n; i++) {
            if(i==0) {
                if(arr[i]==maxx and arr[i+1]<arr[i]) {
                    r=i+1;
                    break;
                }
            } else if(i==n-1) {
                if(arr[i]==maxx and arr[i-1]<arr[i])
                    r=n;
            } else {
                if(arr[i]==maxx and (arr[i+1]<arr[i] or arr[i-1]<arr[i])){
                    r=i+1;
                break;
                }
            }
        }
        if(r==0) cout<<"-1"<<endl;
        else
        cout<<r<<endl;
        r=0;
    }

    return 0;

}
