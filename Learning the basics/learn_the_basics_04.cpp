#include <iostream>
using namespace std;
/*
THIS IS THE CODE WHERE I LEARNED ABOUT USING IF ELSE IF AND ELSE STATEMENTS
int main() {
    int age;
    cout<< "Enter your age ";
    cin >> age;
    if (age>=18)
    {
        cout<<"You are an adult, you can drive";
    }
    else if(age < 10){
        cout<< "You are not an adult and you are a single aged person"; 
       }
    else{
        cout<< "You are not an adult";
    }
    return 0;
}
*/
//THE BELOW PROBLEM IS THE APPLICATION FOR THIS CONCEPT AND THE QUESTION IS ABOUT GRADING SYSTEM
int main(){
    int marks;
    cout<<"Enter your marks in the examination ";
    cin >> marks;
    if (marks < 25){
        cout<< "Grade - F";
    }
    else if (marks < 45)
    {
        cout<< "Grade - E";  
    }
    else if(marks < 50 ){
          cout<< "Grade - D";
    }
    else if(marks < 60){
          cout<< "Grade - C";
    }
    else if(marks < 80){
          cout<< "Grade - B";
    }
    else if(marks <= 100){
          cout<< "Grade - A";
    }
    return 0;
}