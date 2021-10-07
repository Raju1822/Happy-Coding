////////////////////////////////////////////////NITISH//////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
typedef int ll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define sz(a) (ll)((a).size())
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define repA(i,a,n) for(int i=a;i<=n;i++)
#define repB(i,a,n) for(int i=a;i>=n;i--)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()


void solve(){
		string s;
		cin>>s;
		int n=s.size();
		int c=n-1;
		string s1=s,s2=s;
		s1.erase(s1.begin()+n-1);
		s2.erase(s2.begin());
		n--;
		vector<int>v;
		while(c--){
            if(s1==s2)v.pb(n);
            s1.erase(s1.begin()+n-1);
            s2.erase(s2.begin());n--;
		}
		sort(all(v));
		for(auto i:v)cout<<i<<" ";


}

int main(){
	fast;
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
		// cout<<endl;
	}

return 0;
}




//////////////////////////////////////////////////////END////////////////////////////////////////////////
