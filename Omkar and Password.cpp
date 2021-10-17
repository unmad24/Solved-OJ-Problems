#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a[200001],chk=1;
    cin>>t;
    while(t--){
        cin>>n;
        for(int k=0;k<n;k++) cin>>a[k];

        for(i=0;i<n-1;i++)
            if(a[i]!=a[i+1]){
                chk=-1;
                break;
            }
        if(chk==-1) cout<<1<<endl;
        else cout<<n<<endl;

        chk=1;
    }

    return 0;
}
