#include<list>
#include<iostream>
#include<unordered_map>
#include<stack>
#include<vector>
using namespace std;

class Graph{
    public:
     unordered_map<int,list<pair<int,int> > >adj; 

      void addEdges(int u,int v,int weight){
    pair<int,int>p=make_pair(v,weight);
    adj[u].push_back(p);

 }
void printAdj(){
    for (auto i :adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<"("<<j.first<<","<<j.second<<")";
        }
    }
}
void dfs(int node, unordered_map<int,bool>&visited,stack<int>&topo){
    visited[node]=true;
    for(auto i:adj[node]){
        if(!visited[i.first]){
          dfs(i.first,visited,topo);
        }
    }
}
void getShortestPath(int src,vector<int>&dist,stack<int>&topo){
  
dist[src]=0;
while(!topo.empty()){
    int top =topo.top();
    topo.pop();
    if (dist[top]!=INT_MAX){
        for(auto i: adj[top]){
            if(dist[top]+i.second<dist[i.first]){
                dist[i.first]=dist[top]+i.second;
            }
        }
    }
}
}

};

int main(){
    Graph g;
   unordered_map<int,bool>visited;
   stack<int>s;
   int n=6;
   for(int i=0;i<n;i++){
    if(!visited[i]){
      g.dfs(i,visited,s);
    }
   }
   int src=1;
vector<int>dist(n);
for(int i=0;i<n;i++){
    dist[i]=INT_MAX;
}

g.getShortestPath(src,dist,s);
//print
    return 0;
}