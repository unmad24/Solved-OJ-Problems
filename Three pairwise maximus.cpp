#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[4],x,y,z;
    cin>>t;
    while(t--){
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[2]==arr[1]){
        cout<<"YES"<<endl;
        cout<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}
