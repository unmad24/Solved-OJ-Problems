#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=30) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(n==36 or n==40 or n==44)
                cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
            else
             cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        }
    }

    return 0;

}
