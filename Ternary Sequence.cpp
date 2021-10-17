#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,y1,z1,x2,y2,z2,sum;


    cin>>t;
    while(t--){

        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;

        sum=2*min(z1,y2);
        z1-=min(z1,y2);
        y2-=min(z1,y2);

        z2-=min(z2,z1+x1);
        sum-=2*min(z2,y1);

        cout<<sum<<endl;
    }

    return 0;
}
