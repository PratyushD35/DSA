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
vector<int> bfs(unordered_map<int,list<int> >&adj,unordered_map<int,bool>visited,vector<int>ans,int node)
{
    vector<int>indegree;
    int edges;
    //find all indegree
    for(auto i:adj){
         for(auto j:i.second){
            indegree[j]++;
         }
    }
        queue<int>q;
        for(int i=0;i<edges;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        
        visited[node]=1;
        while(!q.empty()){
            int frontnode=q.front();
            q.pop();
            ans.push_back(frontnode);
            //travesre all neighbournood of frontnode
            for(auto i:adj[frontnode]){
               indegree[i]--;
               if(indegree[i]==0){
                q.push(i);
               }
            }

        }
      return ans;  

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
