#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll i,n,res,j,arr[100001],arr1[100001]{},k;
    cin>>n;
    for(i=0; i<n; i++) cin>>arr[i];

    if(n%2==0) res=n/2-1;
    else res=n/2;

    cout<<res<<endl;
    if(res==0) {
        for(i=0; i<n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    } else {
        sort(arr,arr+n);
        for(k=0,i=res,j=0; k<n,i<n,j<res; k++) {
            if(k%2==0) {
                arr1[k]=arr[i];
                i++;
            } else if(k%2!=0) {
                arr1[k]=arr[j];
                j++;
            }
            //cout<<"arr1["<<k<<"]: "<<arr1[k]<<endl;
        }
        if(n%2!=0)
        arr1[n-1]=arr[n-1];
        else{
        arr1[n-1]=arr[n-1];
        arr1[n-2]=arr[n-2];}

        for(i=0; i<n-1; i++) cout<<arr1[i]<<" ";
        cout<<arr1[n-1];
        cout<<endl;
    }
    return 0;

}
