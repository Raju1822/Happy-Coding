#include<bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,p,sum=0;
    cin>>m>>n;
    int ma=100000000;
    int ar[m];
    for(int i=0;i<m;i++)cin>>ar[i];
    vector<int> dp(n+1,ma);
    dp[0]=0;
    for(int i=1;i<=n;i++){
            int mi=ma;
        for(int j=0;j<m;j++){
            if(ar[j]<=i)mi=min(mi,dp[i-ar[j]]);
        }
        if(mi!=ma)dp[i]=mi+1;
    }
    if(dp[n]==ma)cout<<-1;
    else cout<<dp[n];

    return 0;
}

