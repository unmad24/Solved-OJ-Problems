#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,m;
    cin>>num>>m;
    int a[num],arr1[10001];
    for(int i=0; i<num; i++)
        cin>>a[i];
    int cnt=0;
    for (int i=0; i<num; i++)
    {
        int j;
        for (j=0; j<i; j++)
            if (a[i] == a[j])
                break;
        if (i == j)
           cnt++;
    }
    if(cnt<m) {cout<<"NO"<<endl;return 0;}
   else {
            cout<<"YES"<<endl;
    for (int i=0,k=0; i<num; i++)
    {
        int j;
        for (j=0; j<i; j++)
            if (a[i] == a[j])
                break;
        if (i == j){
            arr1[k]=i+1;k++;
        }
    }
    for(int i=0;i<m;i++) cout<<arr1[i]<<" ";
    }


return 0;
}
