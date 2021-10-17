#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    char name[1001][1001];
    int n,j,cnt;
    cin>>n;
    cin>>name[0];
    cout<<"NO"<<endl;
    for (int i = 1; i<n; i++)
    {
        cnt=0;
    cin>>name[i];
    for(j=0;j<i;j++){
        if(name[j]==name[i])
        {
            cnt=1;
            break;
            }
        }
        if(cnt==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    /*for (int j=0;j<n;j++)
    {
    cout<<name[j]<<endl;
    }*/
return 0;
}
