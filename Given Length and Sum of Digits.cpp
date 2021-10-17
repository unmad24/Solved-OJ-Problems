#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll m,s,arr[101],arr1[101],i;
    cin>>m>>s;
    ll n=s;
    if(m==1 and s<=9) cout<<s<<" "<<s<<endl;
    else {

        if(s==9) {
            cout<<1;
            for(i=1; i<m-1; i++) cout<<0;
            cout<<8<<" ";
            cout<<9;
            for(i=1; i<m; i++) cout<<0;
            cout<<endl;
        } else if(s>9 and s<=m*9) {
            for(i=m-1; i>=0; i--) {
                if(i==0) arr1[i]=s;
                else {
                    if(s>9) {
                        arr1[i]=9;
                        s=s-9;
                    } else if (s>1 and s<=9) {
                        arr1[i]=s-1;
                        s=1;
                    } else arr1[i]=0;
                }
            }
            for(ll j=0; j<m; j++) cout<<arr1[j];
            cout<<" ";
            s=n;
            //cout<<"s: "<<s<<endl;
            for(i=0; i<m; i++) {
                if(s>9) {
                    arr[i]=9;
                    s=s-9;
                } else {
                    arr[i]=s;
                    s=0;
                }
            }
            for(i=0; i<m; i++) cout<<arr[i];
            cout<<endl;


        } else if(s<9 and s!=0) {
            cout<<1;
            for(i=1; i<m-1; i++) cout<<0;
            cout<<s-1<<" ";
            cout<<s;
            for(i=1; i<m; i++) cout<<0;
            cout<<endl;


        } else cout<<"-1 -1"<<endl;
    }

    return 0;

}
