#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,i,arr[1001],j,cnt,k,Afinal;
     string s;

     cin>>t;
     while(t--){
            Afinal=0;
            cnt=0;
        cin>>s;
        ll len=s.size();

        i=0;
        for(i=0,k=0;i<len;i++){
            if(s[i]=='1') cnt++;
            else{
                arr[k]=cnt;
                k++;
                cnt=0;
            }
          }
          arr[k]=cnt;
          k++;

            sort(arr, arr+k, greater<int>());
          //for(int y=0;y<k;y++) cout<<arr[y]<<" ";

          for(int y=0;y<k;y+=2){
            Afinal+=arr[y];
          }

          cout<<Afinal<<endl;

        }


     return 0;









}
