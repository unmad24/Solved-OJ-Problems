#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;

        if(n==1) cout<<1<<endl;
        else{
            if(n%2==0)
            cout<<n/2<<endl;
        else cout<<n/2+1<<endl;
        }
    }

    return 0;
}
