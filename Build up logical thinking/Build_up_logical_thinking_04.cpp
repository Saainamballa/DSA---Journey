#include<iostream>
using namespace std;
int main(){
//IN THIS PROBLEM I WILL BE DOING PATTERN 04 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* 1 
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5*/
    for(int i = 0; i <=4; i++){
        for(int j = 0; j<= i; j++){
            cout << i+1 << ' ';
        }
        cout << endl;
    } 
    return 0;
}