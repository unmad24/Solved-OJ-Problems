
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    int m;
    while (l <= r) {
        m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}

int main(void) {
    int arr[100001],arr1[100001],n,i,t;
    cin>>n;
    for(i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    cin>>t;
    for(int j=0; j<t; j++) {
        cin>>arr1[j];
        int x = arr1[j];
        int result = binarySearch(arr, 0, n - 1, x);
        cout<<result<<endl;
    }
    return 0;
}
