#include<list>
#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;
bool isCyclic(int src,unordered_map<int,bool>visited,unordered_map<int,list<int> >&adj){
    unordered_map<int,int>parent;
    parent [src]=-1;
    visited[src]=1;
     queue<int>q;
        q.push(src);
           while(!q.empty()){
            int frontnode=q.front();
            q.pop();
          
            //travesre all neighbournood of frontnode
            for(auto i:adj[frontnode]){
                if(visited[i]==true && i !=parent[frontnode]){
                    return true;

                }else if(!visited[i]){
                       q.push(i);
                    visited[i]=1;
                    parent[i]=frontnode;
                }
            }
            return false;

        }

}
string prepareAdjList(unordered_map<int,bool>visited,unordered_map<int,list<int> >&adj,vector<pair<int,int> >edges){
    for(int i =0;i<edges.size();i++){
          int u=edges[i].first;
          int v=edges[i].second;
          adj[u].push_back(v);
          adj[v].push_back(v);

    }// to handle disconnected grph
    for(int i =0;i<edges.size();i++){
        if(!visited[i]){
            bool ans=isCyclic(i,visited,adj);
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
             isCyclic(i,visited,adj);
    }
    
    }
    return ans;
}
int main(){


    return 0;
}
