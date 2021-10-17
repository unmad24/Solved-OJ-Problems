#include<bits/stdc++.h>
using namespace std;
bool isCoPrime(int p,int q)
{
    if(__gcd(p,q)==1) return true;
    else return false;

}
int main()
{
    int n,first,i,x,y;
    cin>>n;
    first=n/2;
    if(n==3) cout<<1<<" "<<2<<endl;
    else{
    for(i=first;i>=1;i--){
        if(isCoPrime(i,n-i)){
                x=i;
                y=n-i;
                break;
            }
        }
    cout<<x<<" "<<y<<endl;

    }
    return 0;
}
