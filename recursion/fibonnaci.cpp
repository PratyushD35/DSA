#include<iostream>
using namespace std;

int fibonaci(int n){
if (n==0)
return 0;
if (n==1)
return 1;


 return fibonaci(n-1)+fibonaci(n-2);

}
int main(){
   int n;

   cout<<"give the index ";
   cin>>n;
   cout<<endl<<endl;
cout<<"the"<<n<<"element of the series is"<<" "<<fibonaci(n);
 cout<<endl<<endl;



    return 0;
}