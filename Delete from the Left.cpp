#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt,j;
    string s1,s2;
    cin>>s1;
    int len1= s1.size();
    cin>>s2;
    int len2= s2.size();
    cnt=0;
    for(i=len1-1,j=len2-1;i>=0,j>=0;i--,j--){
        if(s1[i]==s2[j]) cnt++;
        else break;
    }
    //cout<<cnt<<endl;
    int result=(len1+len2)-cnt*2;
    cout<<result<<endl;

    return 0;
}
