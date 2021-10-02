#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int>mp;
    int n,m,k,a,b;
    ll ma=INT_MIN,s=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    for(auto i:mp){
        s+=i.second;
        ma=max(ma,s);
    }
    cout<<ma;
    return 0;
}

