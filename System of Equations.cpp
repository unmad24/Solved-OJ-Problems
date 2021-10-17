#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sqr,m,cnt=0;
    cin>>n>>m;
    sqr=sqrt(n);

    if(n==1 and m==1) cout<<2<<endl;
    else {

    for(int i=sqr;i>=1;i--){
        b=n-(i*i);
        if(b*b+i == m)
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
