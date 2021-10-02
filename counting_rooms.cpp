#include<bits/stdc++.h>
#define ll long long
using namespace std;
//Counting Rooms dfs connected components
int x[4]={0,1,0,-1};
int y[4]={1,0,-1,0};

void dfs(vector<vector<int>> &v,int i,int j,int n,int m,vector<vector<int>> &visited){
    visited[i][j]=1;
    for(int d=0;d<4;d++){
        int x1=i+x[d];
        int y1=j+y[d];
        if(x1>=0&&y1>=0&&x1<=n&&y1<=m){
            if(!(visited[x1][y1]) && v[x1][y1]==1)
                dfs(v,x1,y1,n,m,visited);
        }
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    char a;
    int c=0;
    cin>>n>>m;
    vector<vector<int>> v(n+1,vector<int>(m+1,0));
    vector<vector<int>> visited(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a;
            if(a=='.')v[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[i][j]==1 && !(visited[i][j])){
                c++;
                dfs(v,i,j,n,m,visited);
            }
        }
    }
    cout<<c;




    return 0;
}

