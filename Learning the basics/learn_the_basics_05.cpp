#include<iostream>
using namespace std;
int main(){
    //IN THIS I WILL BE SOLVING A CONDITIONAL STATEMENT QUESTION USING NESTED IF ELSES
    int age;
    cout<< "Enter your age to continue further : ";
    cin>> age;
    if(age < 0){
        cout<< "Kindly enter the correct age";
    }
    else if(age < 18){
        cout<< "You are not eligible for the job";
    }
    else if(age <=57){
            cout<< "You are eligible for the job";
            if (age>= 55 )
            {
                cout<< ", but retirement soon" ;
            //HERE IN THIS LINE WE HAVE ADDED THE EXTRA LINE SO THAT THE COMBINATION CAN BE PRINTED
            }
        }
    else{
        cout<< "retirement age";
    }         
    return 0;
    }
    