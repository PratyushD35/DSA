#include<iostream>
using namespace std;

void SelectSort(int *arr,int begin,int n){
    if (begin>n-1){
    return;
    
    }
        int minIndex= begin;
    for( int i=begin;i<n;i++){
       
            if(arr[i]<arr[minIndex]){
            minIndex=i;
            }
               
          
    }
               swap(arr[begin],arr[minIndex]);
           SelectSort(arr,begin+1,n);
    }

int main(){
   int arr[5]={2,3,7,1,3};

     int n= 5;
     SelectSort(arr,0,n);
   for( int i= 0;i<5;i++){
       cout<<arr[i];
   }


    return 0;
}
