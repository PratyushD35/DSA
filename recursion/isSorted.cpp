#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
if (n==0)
return true;
if (n==1)
return true;

 if(arr[0]>arr[1]){
      return false;
 }
else{
 bool remainingPart=   isSorted(arr+1,n-1);
  return remainingPart;
}
   
}


int main(){
 int arr[5]={2,3,3,8,9};
 int n = 5;

bool ans = isSorted(arr,n);
 if(ans)
cout<<"sorted";
 else 
 cout<<"notsorted";

return 0;
}