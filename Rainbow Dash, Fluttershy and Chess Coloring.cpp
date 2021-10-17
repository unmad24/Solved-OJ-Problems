#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,i,cnt,n;
     cin>>t;
     while(t--){
        cin>>n;
        if (n==1) cout<<1<<endl;

        else {
                cnt=1;
            for(i=2;i<=n;i+=2){
            cnt++;
            }
            cout<<cnt<<endl;
        }


     }

     return 0;

}
