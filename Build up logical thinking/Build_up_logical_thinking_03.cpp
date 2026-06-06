#include<iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 03 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5 */
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= i; j++){
            cout<< j+1 << ' ';
        }
        cout << endl;
    }
   return 0;
}
