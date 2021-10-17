#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,c,d,i,j;
    cin>>t;
    while(t--){
        cin>>c>>d;
       if(c*2>d) cout<<-1<<" "<<-1<<endl;
       else cout<<c<<" "<<c*2<<endl;
    }

    return 0;
}
