#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
// #include <iomanip>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define test() \
    ll t;      \
    cin >> t;  \
    while (t--)

#define mem(dp, a) memset(dp, a, sizeof dp)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define pi 3.14159265359

ll INF = 1e18 + 10;
ll mod = 998244353;
const int MOD = 1e9 + 7;
const int p = 31;
const int N = 1e6 + 5;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3]={0};
        for(int i=0;i<5;i++)
        {
            int arr;
            cin>>arr;
            a[arr]++;
        }

        if(a[1]==a[2])
        {
            cout<<"DRAW\n";
        }
        else if(a[1]>a[2])
        {
            cout<<"INDIA\n";
        }else
        {
            cout<<"ENGLAND\n";
        }
    }

    return 0;
}