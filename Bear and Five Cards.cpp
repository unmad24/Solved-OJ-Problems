#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int a[105];

int main(void)
{
	int sum = 0;
	int x,maxs = 0;
	int i;
	for(i=1;i<=5;i++){
		cin>>x;
		a[x]++;
		if(a[x]==2&&x*2>maxs)maxs=x*2;
		if(a[x]==3&&x*3>maxs)maxs=x*3;
		sum+=x;
        cout<<"a["<<x<<"]: "<<a[x]<<endl;
		cout<<sum-maxs<<endl;
	}

	return 0;
}
