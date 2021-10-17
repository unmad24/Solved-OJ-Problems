#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,arr[10001],arr1[1000],n,i,j,cnt=0,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i==0)
            {
                sum=sum+arr[i];
            }
            else if(i%2==0) sum=sum+arr[i];
            else
                sum-=arr[i];
        }
        if(n==2){
                if(arr[0]==1 and arr[1]==1){
                    cout<<2<<endl;
                    cout<<1<<" "<<1<<endl;
                }
                else {
                cout<<1<<endl;
                cout<<0<<endl;}
            }
        else if(sum==0)
        {
            cout<<n<<endl;
            for(i=0; i<n; i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
        else
        {

            if(n==4)
            {
                cout<<2<<endl;
                cout<<1<<" "<<1<<endl;
            }
            else if(n==6)
            {
                cout<<3<<endl;
                cout<<1<<" "<<1<< " "<<0<<endl;
            }
            else
            {
                ll h=n/2;
                if(h%2!=0){
                 cout<<n/2<<endl;
                cout<<1<<" "<<1<<" ";
                for(i=2;i<n/2;i++) cout<<0<<" ";
                cout<<endl;

            }
            else if(h%2==0){
                    cout<<h<<endl;
                for(i=0; i<((n/2)/2); i++) cout<<1<<" ";
                for(j=i+1; j<n; j++) cout<<0<<" ";
                cout<<endl;
            }
        }

    }
    }

    return 0;

}
