#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,current,moves,dif,strnum,len;
    string s;
    cin>>s;
    len=s.size();
    current=1;
    moves=0;
    for(i=0;i<len;i++){
        //cout<<"current: "<<current<<endl;
        strnum=s[i]-96;
        dif=abs(current-strnum);
        if(dif>13)
            moves+=(26-dif);
        else if(dif<13)
            moves+=dif;
        else if(dif==13) moves+=13;

        current=strnum;
//       cout<<"dif: "<<dif<<endl;
//       cout<<"strnum: "<<strnum<<endl;
//        cout<<"moves: "<<moves<<endl;
    }
    cout<<moves<<endl;

    return 0;
}
