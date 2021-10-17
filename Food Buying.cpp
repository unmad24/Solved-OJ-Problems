#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,totalcost,i,x;
     cin>>t;
     while(t--){
        cin>>x;
        totalcost=x;
        while(x/10){

                totalcost+=x/10;
                x=x/10+x%10;
            }
        cout<<totalcost<<endl;
     }

     return 0;

}
