#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int i,j,bills[10001],games[10001];

    cin>>n>>m;
    for(i=0;i<n;i++) cin>>games[i];
    for(j=0;j<m;j++) cin>>bills[j];
    i=0;
    j=0;
    int cnt=0;
    while(1){
        if(bills[j]>=games[i]){
            cnt++;
            i++;
            j++;

            if(i==n) break;
        }
        else {
                i++;
                if(i==n) break;
        }
//        cout<<"i: "<<i<<endl;
//        cout<<"j: "<<j<<endl;

    }
    cout<<cnt<<endl;



    return 0;
}
