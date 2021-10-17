#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zeros=0,ones=0;
    string s;
    cin>>n;
    cin>>s;
    for(int j=0;j<n;j++){
        if(s[j]=='1') ones++;
        else zeros++;
    }
    int answer=max(ones,zeros)-min(ones,zeros);

    cout<<answer<<endl;

    return 0;
}
