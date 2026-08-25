#include <iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 09 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/*    * 
      **
      ***
      ****
      *****
      ****
      ***
      **
      *  */
     for(int i=0;i<5;i++){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<< endl;
     }
     for(int i=4;i>=1;i--){
        for(int j = i;j>=1;j--){
            cout<< "*";
        }
        cout<< endl;
     }
}