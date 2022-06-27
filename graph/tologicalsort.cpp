#include<list>
#include<iostream>
#include<unordered_map>
#include<stack>
#include<vector>
using namespace std;

void topSort(int node,vector<bool>visited,stack<int>s,unordered_map<int,list<int> >adj){
    visited[node]=1;
    for(auto i:adj[node]){
        if(!visited[i]){
            topSort(i,visited,s,adj);
        }
    }
    s.push(node);
}

vector<int>topologicalSort(vector<vector<int> >edges,int v ,int e){
    unordered_map<int,list<int> >adj;
     for(int i =0;i<edges.size();i++){
          int u=edges[i][0];
          int v=edges[i][1];
          adj[u].push_back(v);
         
    }
    //call dfs function until all compontes
    vector<bool>visited(v);
    stack<int>s;

    for(int i=0;i<v;i++){
        if(!visited[i]){
            topSort(i,visited,s,adj);
        }

    }
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();

    }
    return ans;
}