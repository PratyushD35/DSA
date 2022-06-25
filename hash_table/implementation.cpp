#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<string,int>m;
//insertion
pair<string,int>p=make_pair("babbar",3);
m.insert(p);
m["mera"]=1;
//search
cout<< m["mera"]<<endl;
cout<<m.at("babbar")<<endl;
//will give error

// cout<<m.at("unknownkey");
//create a unknown with 0
cout<<m["unknownkey"]<<endl;

return 0;
}