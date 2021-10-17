#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,i,arr[101],j,l,r,result,sum=0;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum==n) cout<<n-1<<endl;

    else {
        for(i=0 ;; i++) {
            if(arr[i]==0) {
                l=i;
                break;
            }
        }
        for(j=n-1 ;; j--) {
            if(arr[j]==0) {
                r=j;
                break;
            }
        }
        ll nOf0=0;
        ll nOf1=0;
        for(i=0; i<n; i++) {
            if(arr[i]==0) nOf0++;
        }
        for(i=0; i<n; i++) {
            if(arr[i]==1) nOf1++;
        }
        if(nOf0>=nOf1) {

            result=nOf0+(n-((r-l)+1));

            cout<<result<<endl;
        } else {
        cout<<"N of 1: "<<nOf1<<endl;
        cout<<"N of 0: "<<nOf0<<endl;
        }

    }
    return 0;

}




/*

100
0 1 0 1 1 1 0 1 0 1 0 0 1 1 1 1 0 0 1 1 1 1 1 1 1 0 0 1 1 1 0 1 1 0 0 0 1 1 1 1 0 0 1 1
1 0 0 1 1 0 1 1 1 1 1 1 0 1 1 1 1 1 0 0 1 1 1 1 1 1 1 1 1 1 0 1 1 1 0 1 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1

*/






















