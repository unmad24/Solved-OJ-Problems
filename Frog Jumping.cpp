#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll a,b,k;

     int t;
     cin>>t;
     while(t--){
        cin>>a>>b>>k;
        if(k%2==0)
        cout<<(k/2)*a - (k/2)*b<<endl;
        else
             cout<<(k/2+1)*a - (k/2)*b<<endl;
     }

     return 0;

}
