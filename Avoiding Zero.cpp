#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,arr[100001],arr1[100001],i,j,k;
     cin>>t;
     while(t--){
        cin>>n;
        for(i=0;i<n;i++) cin>>arr[i];

        //sort(arr,arr+n);
        ll sum=0;
        for(i=0,k=0;i<n,k<n;i++,k++){
            for(j=0;j<=i;j++){
                sum+=arr[j];
            }
            arr1[k]=sum;
            sum=0;
        }

        //for(i=0;i<n;i++) cout<<arr1[i]<<" ";
        if(arr[0]==0){
            swap(arr[0],arr[1]);
        }
        ll chk=0;
        for(i=0;i<n;i++){
            if(arr1[i]==0) {chk=1;break;}
        }
        if(chk==1) cout<<"NO"<<endl;
        else {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;}
     }

     return 0;

}









