#include <iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 08 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/*   
   *********
    *******
     *****
      ***
       *  */
 for(int i = 0;i<=4;i++){
    for(int j =0; j<i;j++){
        cout<< " ";
    }
    for(int j =0;j<9-2*i;j++){
        cout<< "*";
    }
    for(int j =0; j<i;j++){
        cout<< " ";
    }
    cout<< endl;

   }
}