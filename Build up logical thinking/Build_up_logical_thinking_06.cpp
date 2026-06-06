#include<iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 06 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* 1 2 3 4 5 
   1 2 3 4
   1 2 3
   1 2
   1      */
   for(int i =5; i>=1; i--){
    for(int j =1; j <= i; j++){
        cout<< j << ' ';
    }
    cout<< endl;
   }
   return 0;
}