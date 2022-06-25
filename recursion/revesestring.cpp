#include<iostream>
using namespace std;
 
void Reversetring(string &input,int i, int j){
     if (i>j){
         return ;
     }
     swap (input[i],input[j]);
     i++;
     j--;
     Reversetring(input,i, j);
    
 }

int main(){
     
   string input;
   cin>>input;

   cout<<input<<endl<<endl;
 Reversetring(input,0,input.size()-1);
   cout<<input<<endl;


    return 0;
}