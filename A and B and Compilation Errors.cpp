#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,j,arr[100010],arr2[100010],arr3[100010],i,first,second;
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];
    for(i=0;i<n-1;i++) cin>>arr2[i];
    for(i=0;i<n-2;i++) cin>>arr3[i];

    sort(arr,arr+n);
    sort(arr2,arr2+(n-1));
    sort(arr3,arr3+(n-2));

//    for(i=0;i<n;i++) cout<<arr[i]<< " ";
//    cout<<endl;
//    for(i=0;i<n-1;i++) cout<<arr2[i]<< " ";
//    cout<<endl;
//    for(i=0;i<n-2;i++) cout<<arr3[i]<< " ";
//         cout<<endl;
      first=0;

      for(i=0,j=0;i<n,j<n-1;i++,j++){
        if(arr[i]!=arr2[j]){
            first=arr[i];
            break;
        }
      }
      if(first==0) first=arr[n-1];
    cout<<first<<endl;

      second = 0;
      for(i=0,j=0;i<n-1,j<n-2;i++,j++){
        if(arr2[i]!=arr3[j]){
            second=arr2[i];
            break;
        }
      }
      if(second==0) second=arr2[n-2];
      cout<<second<<endl;

    return 0;
}
