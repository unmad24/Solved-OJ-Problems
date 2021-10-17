#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll x,dif,n,sq;
    cin>>n;
    x=n;
    ll cnt=0;
    while(x>0){
            x=x/2;
        if(x%2==1) cnt++;
    }
    if(n%2!=0)
    cout<<cnt+1<<endl;
    else
    cout<<cnt<<endl;

    return 0;

}
