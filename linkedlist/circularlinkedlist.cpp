#include <iostream>
#include<stdlib.h>
using namespace std;



struct Node
{
    int data;
    Node *next;
    Node *prev;
   
} *head,*tail;

void create(){

   struct Node *newnode;
   int choice;
   head=0;
   while(choice){
   newnode=(struct Node*) malloc(sizeof(struct Node));
 cout<<"Enter Data"<<endl;
scanf("%d", &newnode->data);
newnode->next=0;

 if (head==0){
     head=tail=newnode;
     tail->next=newnode;
}
else{

    tail->next=newnode;
    tail=newnode;
    tail->next=head;

}
cout<<"do you want to continue"<<endl;
cin>>choice;}
}
void print(){
 struct Node *temp;
     temp=head;
 
 while(temp->next!=tail->next)
 {
     printf("%d ",temp->data);
     temp=temp->next;
    
 }  printf("%d ",temp->data);
}
void reverse(){
    struct  Node *prevnode,* currentnode,*nextnode;
    currentnode=nextnode=prevnode=head;
    while(nextnode!=tail){
        
       currentnode=nextnode->next;
       nextnode=currentnode->next;
       currentnode->next=prevnode;
       prevnode=currentnode;
       currentnode=nextnode; 
        
    } head->next=nextnode;
    nextnode->next=prevnode;
     tail=head;
     head=currentnode;
    
    
}
int main(){
    create();

    print();
    reverse();
    cout<<endl<<"link after reverse"<<endl;
    print();



    return 0;
}
