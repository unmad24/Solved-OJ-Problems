#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem1,rem2,upside,ans;
    cin>>n;

    if(n>0) cout<<n<<endl;

    else if(n<0){

    rem1=abs(n%10);
    rem2=abs((n/10)%10);

    int dif=(rem1-rem2);

    int last= n%100;

    if(rem2<rem1) ans=(n/10);
    else if(rem2>rem1){
    n=n-(dif*9);
    ans=(n/10);
    }
    else if(rem1==rem2) ans=(n/10);

    cout<<ans<<endl;
    }



    return 0;
}
