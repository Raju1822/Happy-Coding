#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,p;
    cin>>t;
    while(t--){
        ll ar[32];
        cin>>n;
        for(int i=0;i<32;i++)ar[i]=0;
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            int mask=0;
            for(auto c:s){
                if(c=='a') mask=mask|(1<<0);
                if(c=='e') mask=mask|(1<<1);
                if(c=='i') mask=mask|(1<<2);
                if(c=='o') mask=mask|(1<<3);
                if(c=='u') mask=mask|(1<<4);
            }
          ar[mask]++;
        }

        ll res=0;
        for(int i=1;i<32;i++){
            for(int j=i+1;j<32;j++){
                if((i|j)==31){
                    res=res+ar[i]*ar[j];
                   }
            }
        }

        res+=(ar[31]*ar[31]/2);
        cout<<res<<'\n';
    }

    return 0;
}

