#include<bits/stdc++.h>
using namespace std; 


   
vector<int> res;

//check given graph is directed acyclic graph (DAG) or not
/*

FOR TOPOLOGICAL SORT
graph should be DAG

*/
bool chkcycl(vector<vector<int> > &adj, vector<int> &vis,int s)
{    
    if(vis[s]==1) return 1;
    if(vis[s]==2) return 0;
    vis[s]=1;
    for(int i=0;i<adj[s].size();i++)
    {  
           if(chkcycl(adj,vis,adj[s][i])) return 1;
    } 
    vis[s]=2;
    return 0;
}

//if DAG find the course schedule
void dfs(vector<vector<int> > &adj, vector<int> &vis,int s)
{
    //mark current element as visited
    vis[s]=1;
    for(int i=0;i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==0)
            dfs(adj,vis,adj[s][i]);
    }
    res.push_back(s);
}
void findOrder(int numCourses, vector<vector<int> >& prerequisites) {
	
	 
    vector<vector<int> > adj(numCourses);
    
    cout<<"\n************ GIVEN INPUT ************\n\n";
    cout<<"Number of Processes are "<<numCourses<<"\n\n";
    cout<<"Prerequisites\n";
    
	for(int i=0;i<prerequisites.size();i++)  
	{ 
	    cout<<"Complete process "<<prerequisites[i][1]<<" before completing process "<<prerequisites[i][0]<<"\n";
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
	}
    
    cout<<"\n\n************ OUTPUT ************\n\n";
    vector<int> vis(numCourses,0);
     
    for(int i=0;i<numCourses;i++)
    { 
        if(!vis[i]) 
            if(chkcycl(adj,vis,i)) { cout<<"Given process entered in Deadlock, unable to complete processes";return ;}
    }
    
    for(int i=0;i<numCourses;i++)
       vis[i]=0;
    
    for(int i=0;i<numCourses;i++)
    {  if(vis[i]!=1) 
       dfs(adj,vis,i);  
    }
    reverse(res.begin(),res.end());
    
	
	cout<<"Correct order of completing processes is\n\n";
	for(int i=0;i<res.size();i++) cout<<res[i]<<" -> ";
	cout<<"\n\nJOB Copmpleted\n"; 
    
} 

 

int main ()
{
	int n,pq;
	cout<<"Enter number of processes \n";
	cin>>n;
	vector<vector<int> > arr;
	
	cout<<"Enter number of prerequisites \n";
	cin>>pq;
	
	
	cout<<"To complete process a you should have finished process b\n\n";
	cout<<"Enter prerequisites in following given format:\na  b\n\n";
	
	for(int i=0;i<pq;i++)
	{ 
		vector<int> temp(2);
		cin>>temp[0]>>temp[1]; 
		arr.push_back(temp);
	} 
	
	findOrder(n, arr);   
}
