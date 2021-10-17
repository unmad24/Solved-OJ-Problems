#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum,t,n,moves,maxi, a[1001],b[1001],i,amin,bmin,dif1,dif2,amini,bmini;

    cin>>t;
    while(t--){
            sum=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        amini=a[0];
        for(i=1;i<n;i++) {
            if(a[i]<amini) amini=a[i];
        }
        bmini=b[0];
        for(i=1;i<n;i++){
            if(b[i]<bmini) bmini=b[i];
        }

        for(i=0;i<n;i++){
            dif1=a[i]-amini;
            dif2=b[i]-bmini;
            sum+=max(dif1,dif2);
            //cout<<"moves: "<<moves<<endl;
        }

//        cout<<"amini: "<<amini<<endl;
//        cout<<"bmini: "<<bmini<<endl;

    cout<<sum<<endl;

    }

    return 0;
}
