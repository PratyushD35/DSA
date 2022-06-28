#include<list>
#include<iostream>
#include<unordered_map>
#include<stack>
#include<set>
#include<vector>
using namespace std;

class Graph{
public:
vector<vector<int> >vec;//given graph
 unordered_map<int,list<pair<int,int> > >adj; 
    void addEdges(int u,int v,int w){
  for(int i= 0;i<u;i++){
      u=vec[i][0];
      v=vec[i][1];
      w=vec[i][2];
     adj[u].push_back(make_pair(u,w));
    adj[v].push_back(make_pair(v,w));
  }
   
 }
 void ShortestDistance(int src,vector<int>&dist,set<pair<int,int> >&s){
     dist[src]=0;
      s.insert(make_pair(0,src));
      while(!s.empty()){

       auto top=*(s.begin());
       int nodeDistance=top.first;
       int topnode=top.second;
       s.erase(s.begin());
       for(auto i :adj[topnode]){
         if(nodeDistance+i.second<dist[i.first]){
            auto record=s.find(make_pair(dist[i.first],i.first));
            //if record is found
            if (record !=s.end()){
                    s.erase(record);
            }
            //distance update
            dist[i.first]=nodeDistance+i.second;
            //record push
            s.insert(make_pair(dist[i.first],i.first));
         }
       }
      }
    
    

      
 }

};


int main(){
    int n= 4;
    set<pair<int,int> >s;
vector<int>dist(n);
for(int i=0;i<n;i++){
    dist[i]=INT_MAX;
}


}