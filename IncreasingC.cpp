#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define inf 9999999999
#define LIM 300005
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
    ///MUST READ THE POINTS BELOW BEFORE SUBMIT

    ll t, n, m, i, f, a, b, c, d;
    cin >> t;
    while(t--){
        cin >> n >> m;
        f = 0;
        while(n--){
            cin >> a >> b;
            cin >> c >> d;
            if(b == c) f = 1;
        }
        if(m%2 == 1) f = 0;
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }





    return 0;
    ///MUST READ THE POINTS BELOW BEFORE SUBMIT
}
/**
    1. LOOK SPECIAL CASE N = 1.
    2. LOOK FOR OVERFLOW.
    3. LOOK FOR OUT OF BOUNDS.
**/
