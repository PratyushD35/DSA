#include<iostream>
#include<string>
using namespace std;

class Solution{
public:	
	
	

    int Ispalandrome(string S){
       string temp;


        for (int i = S.length()-1; i>=0; i--){
            temp+=S[i];
        
         
        }if(temp==S){ 
            return 1;
            }
        else{ 
            return 0;
            }
    }

};




