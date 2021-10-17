#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t,n,arr[100001],i,j,x,y;
    cin>>t;
    while(t--) {
        x=0;
        int cnt=0,dnt;
        cin>>n;
        for(i=0; i<n; i++) cin>>arr[i];

        int r = ((n*n-n)/2)-1;

        while(1) {
            cnt=0;
            for(i=0; i<n-1; i++) {
                if(arr[i]>arr[i+1]) {
                    cnt++;
                    swap(arr[i],arr[i+1]);
                }

            }
            dnt=cnt;
            x+=dnt;
            if(x>=r) break;
            else if(dnt==0)break;
        }

        if(x<=r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

//        cout<<"x: "<<x<<endl;
//
//        for(i=0; i<n; i++) cout<<arr[i]<<" ";

    }

    return 0;

}
