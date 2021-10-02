#include<bits/stdc++.h>
#define ll long long
using namespace std;

int binary(int l,int r,vector<int> ar,int k){
    while(l<r){
        ll mid=(l+r)/2;
        if(ar[mid]==k || l==r)return mid;
        else{
            if(ar[mid]<k)l=mid+1;
            else r=mid-1;
        }
    }
    return -1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,c=0,ma,m,a,b;
    cin>>n>>m;
    vector<ll> price(0,n);
    vector<ll> ar(0,m);
    for(int i=0;i<n;i++){
        cin>>a;
        price[i]=a;
    }
    for(int i=0;i<m;i++){
        cin>>a;
        ar[i]=a;
    }
    sort(price.begin(),price.end());
    for(int i=0;i<m;i++){
       b = binary(0,m-1,price,ar[i]);
        cout<<b<<" ";
    }
    return 0;
}

