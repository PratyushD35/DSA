#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
using namespace std;
void prepareAdjList(unordered_map<int,list<int> >&adj,vector<pair<int,int> >edges){
    for(int i =0;i<edges.size();i++){
          int u=edges[i].first;
          int v=edges[i].second;
          adj[u].push_back(v);
          adj[v].push_back(v);
    }
}
void dfs(int node,unordered_map<int,bool>visited,unordered_map<int,list<int> >&adj,vector<int>&component)
{
       
        component.push_back(node);
        visited[node]=1;
        //har connected node ke liye recusive call
        for(auto i:adj[node]){
            if(!visited[i]){
               dfs(i,visited,adj,component);
            }
        }

}
vector<vector<int> >BFS(int vertex,vector<pair<int,int> >edges){
unordered_map<int,list<int> >adj; 
unordered_map<int,bool>visited;
vector<vector<int> >ans;
prepareAdjList(adj,edges);
// travese all components of a graph
for(int i=0;i<vertex;i++){
    if(!visited[i]){
        vector<int>component;
             dfs(i,visited,adj,component);
             ans.push_back(component);
    }
    
    }
    return ans;
}

    int main(){


    return 0;
}
