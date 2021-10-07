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

void make_array(string pat,int m,int *lps){
	int len=0,i=1;
	lps[0]=0;
	while(i<m){
		if(pat[i]==pat[len]){
			len++;
			lps[i]=len;
			i++;
		}
		else{
			if(len!=0){
				len=lps[len-1];

			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
}

void solve(){
		string text,pat;
		cin>>text;
		cin>>pat;
		int n=text.size();
		int m=pat.size(),c=0;
		int lps[m];
		make_array(pat,m,lps);
		int i=0,j=0;
		while(i<n){
			if(pat[j]==text[i]){i++;j++;}
			if(j==m){c++;j=lps[j-1];}
			else if(i<n && pat[j]!=text[i]){
				if(j!=0)j=lps[j-1];
				else i++;
			}
		}
		cout<<c;

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
