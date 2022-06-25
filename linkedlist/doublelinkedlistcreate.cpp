#include <iostream>
#include<stdlib.h>
using namespace std;



struct Node
{
    int data;
    Node *next;
    Node *prev;
   
};
int main(){
struct Node *head,*newnode,*temp;
   head=0;int choice,count=0;
   
  while(choice){

 newnode=(struct Node*) malloc(sizeof(struct Node));
 cout<<"Enter Data"<<endl;
scanf("%d", &newnode->data);
 newnode->next=0;
 newnode->prev=0;
 if (head==0){
     head=temp=newnode;
 }else{
     temp->next=newnode;
     newnode->prev=temp;
     temp=newnode;
 }  cout<<"do you want to continue"<<endl;
 cin>>choice;
 }
 
 temp=head;
 while(temp!=0){
     printf("%d ",temp->data);
     temp=temp->next;
    
    count++;
 }
 cout<<endl;
 cout<<"no of data"<<endl;
 cout<<count<<endl;

 return 0;
}

