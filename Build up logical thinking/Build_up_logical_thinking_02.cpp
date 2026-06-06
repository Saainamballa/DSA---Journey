#include<iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 02 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* * 
   * * 
   * * *
   * * * * 
   * * * * * */
   for(int i = 0; i<=4; i++){
    for(int j = 0;j<=i; j++ ){
        cout<< '*' << ' ';
    }
    cout << endl;
   }
    return 0;
}