#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{ll n,m,arr[101],i,a;cin>>n>>m;set<ll> s;
     while(n--){cin>>a;
        for(i=0;i<a;i++){cin>>arr[i];s.insert(arr[i]);}}
     if(s.size()==m) cout<<"YES"<<endl;else cout<<"NO"<<endl;
    return 0;}
