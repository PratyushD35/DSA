 #include<list>
#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;
bool isCyclicdfs(int src,int parent,unordered_map<int,bool>visited,unordered_map<int,list<int> >&adj){
    unordered_map<int,int>parent;

    visited[src]=1;
 
          
            //travesre all neighbournood of frontnode
            for(auto i:adj[src]){
                if(!visited[i]){
                    bool cycledetected=isCyclicdfs(i,src,visited,adj);
                        if(cycledetected)
                        return true;
                }else if(i!=parent){
                       return true;
                }
            }
            return false;
}
string prepareAdjList(unordered_map<int,bool>visited,unordered_map<int,list<int> >&adj,vector<pair<int,int> >edges){
    for(int i =0;i<edges.size();i++){
          int u=edges[i].first;
          int v=edges[i].second;
          adj[u].push_back(v);
          adj[v].push_back(v);
           
    }// to handle disconnected grph
    int parent;
    for(int i =0;i<edges.size();i++){
        if(!visited[i]){
            bool ans=isCyclicdfs(i,parent,visited,adj);
            if(ans==1)
              return "yes";
        }
    }
}

vector<int>BFS(int vertex,vector<pair<int,int> >edges){
unordered_map<int,list<int> >adj; 
unordered_map<int,bool>visited;
vector<int>ans;
prepareAdjList(visited,adj,edges);
// travese all components of a graph
for(int i=0;i<vertex;i++){
    if(!visited[i]){
       
    }
    
    }
    return ans;
}
int main(){


    return 0;
}
