#include<iostream>
using namespace std;

void insertSort(int *arr,int n){
    if (n==0 ||n==1){
    return;
    
    }
      
    for( int i=n;i>=0;i--){
       int temp=arr[n-i+1];

       if (arr[i]>temp){
          arr[n-i+1]=arr[i];
       } else{
           break;
       }
       
     
    } 
     insertSort(arr,n-1);  
    }

int main(){
   int arr[5]={2,3,7,1,3};

     int n= 5;
     insertSort(arr,n);
   for( int i= 0;i<5;i++){
       cout<<arr[i];
   }


    return 0;
}
