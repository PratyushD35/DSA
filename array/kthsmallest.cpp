#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
void selectSort(int nums[], int n){

    for (int i=0;i<n-1;i++){
        int minIndex=i;
     for(int j=i+1;i<n;j++){
        
    if(nums[j]<nums[minIndex]){
            minIndex=j;
    } 
    
    }

    swap(nums[minIndex],nums[i]);
    
     }

}



};

int main(){
    Solution ok;
   int n;
   int k;

 int arr[100];
 
 cout<<"enter the size of array";
 cin>>n;
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
ok.selectSort(arr,n);
cout<<"enter the smallest element"<<endl;
cin>>k;
     int highest=n-1;
        int ans=highest-k;
        cout<<"the "<<k<<"smallest element is"<< arr[ans];



    return 0;

}
