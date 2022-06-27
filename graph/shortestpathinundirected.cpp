#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
#include<stdlib.h>
using namespace std;
vector<int> shortestpath( vector<pair<int,int> >edges,int n,int m,int s,int t){
   
    unordered_map<int,list<int> >adj;
    for(int i =0;i<edges.size();i++){
          int u=edges[i].first;
          int v=edges[i].second;
          adj[u].push_back(v);
          adj[v].push_back(v);
    }
    unordered_map<int,int>parent; 
unordered_map<int,bool>visited;

queue<int>v;
v.push(s);
parent[s]=-1;
visited[s]=true;
while(!v.empty()){
     int front =v.front();
     v.pop();
     for(auto i:adj[front]){
        if(!visited[i]){
            visited[i]=true;
            parent[i]=front;
            v.push(i);


        }
     }

}

vector<int>ans;
int currNode=t;
ans.push_back(t);
while(currNode !=s){
    currNode=parent[currNode];
    ans.push_back(currNode);
}
     //reverse the ans
return ans;
}

