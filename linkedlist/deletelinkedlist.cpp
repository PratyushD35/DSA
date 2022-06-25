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
void delete_at_begin(){
    temp=head;
    head=head->next;
    if (head==0){
        cout<<"list is empty";
    }
    else{
        delete temp;
    }
}
void delete_at_end(){
struct Node *prevnode;
 temp=head;
 while(temp->next!=0){
     prevnode=temp;
     temp=temp->next;

 } if(temp==head){
     head=0;
 }else{
        prevnode->next=0;}
     delete temp;
}

void display(){ 

    temp=head;
    while(temp!=0){
     printf("%d ",temp->data);
     temp=temp->next;
    }
}


int main(){ 
    create();
    puts("Created Linked List: \n");
    display();


    delete_at_begin();
    puts("\nlist after delete \n");
    display();
    delete_at_end();
    puts("\nlist after deleting at end");
    display();

 

 return 0;
}

