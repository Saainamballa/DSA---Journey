#include<iostream>
using namespace std;
int main(){
//IN THIS CODE I WILL BE LEARNING FOR AND WHILE LOOP INCLUDING DO WHILE LOOP
    int i;
    for (i=0;i<=10;i+=1){
        cout << "Hello guys this is Saai Namballa " << endl;
    }
// IF I IMPLEMENT WITH WHILE LOOP WHERE THE CONDITION WILL BE CHECKED FIRST AND THEN THE CODE PART WILL BE EXECUTED AND THEN INCREMENTATION WILL BE DONE
    int j = 0;
    while (j<=10){
        cout<< "Hey there this is Saai Namballa with while loop "<< endl;
        j+=1;
    }
//IF I IMPLEMENT THE SAME USING DO WHILE LOOP THEN INITIALLY THE CODE PART WILL BE EXECUTED FIRST FOLLOWED BY CONDITION CHECKING AND INCREMENTATION
    int k = 1;
    do
    {
        cout<< "This is Saai Namballa with do while loop "<< endl;
        k+=1;
    
    } while (k < 3);   
 return 0;

}