#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll n,i;cin>>n;
     ll sq=sqrt(n);

     for(i=sq;i>=1;i--){
            if(n%i==0){
             cout<<i<<" "<<n/i<<endl;
             break;
             }
     }


     return 0;

}
