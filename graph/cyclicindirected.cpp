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
bool checkcycledfs(int node,unordered_map<int,bool>visited,unordered_map<int,list<int> >&adj,unordered_map<int,bool>visiteddfs)
{
    visited[node]=true;
    visiteddfs[node]=true;
    for(auto i :adj[node]){
        if(!visited[node]){
            bool cycledected=checkcycledfs(node,visited,adj,visiteddfs);
            if(cycledected)
            return true;
        }else if(visiteddfs[node])
        return true;
    }

    visiteddfs[node]=false;
    return false;
       
     
}
bool DFS(int vertex,vector<pair<int,int> >edges){
unordered_map<int,list<int> >adj; 
unordered_map<int,bool>visited;
vector<vector<int> >ans;
unordered_map<int,bool>visiteddfs;
prepareAdjList(adj,edges);
// travese all components of a graph
for(int i=0;i<vertex;i++){
    if(!visited[i]){
   
        bool ans   =  checkcycledfs(i,visited,adj,visiteddfs);
        if(ans==true)
            return true;
    }
    
    }
    return false;
}

    int main(){


    return 0;
}
