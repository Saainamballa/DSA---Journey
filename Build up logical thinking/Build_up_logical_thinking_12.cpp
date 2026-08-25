#include <iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 09 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* 1      1
   12    21
   123  321
   12344321
 */
for(int i = 1; i<5;i++){
    for(int j = 1; j<=i; j++ ){
        cout<< j;
    }
    for(int j= i; j<=6-2*i;j++){
        cout<< " ";
    }
    for(int j = 1; j<=i; j++ ){
        cout<< j;
    }
    cout<< endl;
}
}