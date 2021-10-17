#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,t,i,j,k,cnt;
    string s;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>s;


        for(i=1; i<n; i++) {
            ll cnt=0;
            ll dnt=0;
            if(i%2!=0) {
                for(j=0; j<n; j+=2) {
                    if(s[j]!='\0' and (s[j]-48)%2==0) {
                        s[j]= {};
                        cnt=1;
                        break;
                    }
                }
                if(cnt==0) {
                    for(ll q=0; q<n; q+=2) {
                        if(s[q]!='\0') {
                            s[q]='\0';
                            break;
                        }
                    }
                }

            } else {
                for(k=1; k<n; k+=2) {
                    if(s[k]!='\0' and (s[k]-48)%2!=0) {
                        s[k]= {};
                        dnt=1;
                        break;
                    }
                }
                if(dnt==0) {
                    for(ll l=1; l<n; l+=2) {
                        if(s[l]!='\0') {
                            s[l]='\0';
                            break;
                        }
                    }
                }
            }

        }
        for(i=0; i<n; i++) {
            if(s[i]!='\0' and (s[i]-48)%2!=0) {
                cout<<1<<endl;
                break;
            } else if(s[i]!='\0' and (s[i]-48)%2==0) {
                cout<<2<<endl;
                break;
            }
        }

    }

    return 0;

}







