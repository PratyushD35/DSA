#include <iostream>
using namespace std;

class node{
    public:
int data;
node* next;
node* temp;
};


int main(){
    int choice;
  
    node* head = 0;
    node* temp= new node;
    cout<<"enter data"<<endl;
    cin>>temp->data;
    temp->next=0;
    while(choice==1){
    if(head==0){
        head=temp=new node;
    }
    else{
        temp->next=new node;
        temp=new node;
    }
    } 
       cout<<"do you want to create a node"<<endl;
       cin>>choice;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }








    return 0;
}