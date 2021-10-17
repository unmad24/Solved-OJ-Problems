#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll a,b;
     cin>>a>>b;

     while(a!=0 and b!=0 and (a>=2*b or b>=2*a))
     {
        if(a>=2*b) a%=2*b;
        else if(b>=2*a) b%=2*a;
     }

    cout<<a<<" "<<b<<endl;
     return 0;

}
