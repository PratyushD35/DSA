#include <iostream>
#include<stdlib.h>
using namespace std;





struct Node
{
    int data;
    Node *next;
   
};
 struct Node *head,*temp;
void create(){
   struct Node *newnode;
   
   head=0;int choice,count=0;
   
  while(choice){

 newnode=(struct Node*) malloc(sizeof(struct Node));
 cout<<"Enter Data"<<endl;
scanf("%d", &newnode->data);
 newnode->next=0;
 if (head==0){
     head=temp=newnode;
 }else{
     temp->next=newnode;
     temp=newnode;
 }  cout<<"do you want to continue"<<endl;
 cin>>choice;
 }
}
void reverse(){
    struct Node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    temp=head;
    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
        

    } head=prevnode;
}
void display(){ 

    temp=head;
    while(temp!=0){
     printf("%d ",temp->data);
     temp=temp->next;
    }
}

int main (){
 
 create();
 cout<<"\n"<<"linkedlist \n";
 display();cout<<"\n";
 reverse();
 cout<<"\n after reverse\n";
 display();


    return 0;
}