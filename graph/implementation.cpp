#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
public: 
unordered_map<int,list<int> >adj;
 void addEdge(int u,int v, bool direction){
   //direction =0->undirected
   //direction =1->directed

   // creation of an edge from u to v
   adj[u].push_back(v);
   if(direction==0){
    adj[v].push_back(u);
   }
 }
 void printadjList(){
    for (auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
         cout<<j<<",";
    }
    }
 }
};
int main(){

int n;
cout<<"enter number of nodes"<<endl;
cin>>n;

int m;
cout<<"enter number of edged"<<endl;
cin>>m;
graph g;
for(int i =0;i<m;i++){
    int u , v;
       cin>>u>>v;
       g.addEdge(u,v,0);


}
   g.printadjList();
    return 0;
}
