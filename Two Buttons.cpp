#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;

    cin>>n>>m;
    while(n<m){
        if(m%2) m++;
        else m=m/2;
        cnt++;
    }

    cnt=cnt+(n-m);


    cout<<cnt<<endl;

    return 0;
}
