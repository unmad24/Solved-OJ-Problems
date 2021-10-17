#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t,i,n,j,arr[100001],arr1[100001],cnt,cnt1;
    cin>>t;
    while(t--) {
            ll chk=1;
            cnt=0;
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                chk=0;break;
            }
        }
        if(chk==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;

}
