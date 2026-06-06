#include<iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 05 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* 
   * * * * * 
   * * * * 
   * * *
   * * 
   *         */
for(int i =0 ; i<= 4; i++){
    for(int j = i; j<=4; j++){
        cout<< '*'<< ' ';
    }
    cout << endl;
}
   return 0;
}