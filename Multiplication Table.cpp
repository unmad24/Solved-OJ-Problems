#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,x;
    cin>>n>>x;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(x%i ==0 and x/i<=n) cnt++;
    }
    cout<<cnt<<endl;

}
