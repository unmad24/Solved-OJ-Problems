#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0,gotA,gotB;
    string s;
    cin>>s;
    n=s.size();

    for(i=0;i<n-1;i++){
        if(s[i]=='A' and s[i+1]=='B') {
                gotA=i;
                gotB=i+1;
                cnt++;
        for(i=0;i<n-1 && (i!= gotA and i!= gotB);i++){
        if(s[i]=='B' and s[i+1]=='A') {
                cnt++;
                break;
            }
        }
                break;
    }
        if(s[i]=='B' and s[i+1]=='A') {
                gotB=i;
                gotA=i+1;
                cnt++;
        for(i=0;i<n-1 && (i!= gotB and i!= gotA);i++){
        if(s[i]=='A' and s[i+1]=='B') {
                cnt++;
                break;
                }
            }
        }
        break;
    }

    cout<<cnt<<endl;

    return 0;
}
