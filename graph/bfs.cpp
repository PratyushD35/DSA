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
void bfs(unordered_map<int,list<int> >&adj,unordered_map<int,bool>visited,vector<int>ans,int node)
{
       
        queue<int>q;
        visited[node]=1;
        while(!q.empty()){
            int frontnode=q.front();
            q.pop();
            ans.push_back(frontnode);
            //travesre all neighbournood of frontnode
            for(auto i:adj[frontnode]){
                 if(!visited[i])
               {
                  for(auto i : adj[frontnode]){
                     q.push(i);
                     visited[i]=1;
                  }
               }
            }

        }

}
vector<int>BFS(int vertex,vector<pair<int,int> >edges){
unordered_map<int,list<int> >adj; 
unordered_map<int,bool>visited;
vector<int>ans;
prepareAdjList(adj,edges);
// travese all components of a graph
for(int i=0;i<vertex;i++){
    if(!visited[i]){
             bfs(adj,visited,ans,i);
    }
    
    }
    return ans;
}
int main(){


    return 0;
}
