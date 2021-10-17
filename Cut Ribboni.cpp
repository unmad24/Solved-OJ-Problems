#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int x,y,z,p=0,mini;

    mini=min(a,min(b,c));
    mini=n/mini;

    for(x=mini;x>=0;x--){
        for(y=0;y<=mini;y++){
            z=abs((n-(a*x+b*y))/c);
            if((a*x+b*y+c*z)==n){
                p=max(p,x+y+z);
            }
        }
    }
    cout<<p<<endl;
    return 0;
}
