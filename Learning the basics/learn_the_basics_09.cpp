/*IN THIS I WILL BE LEARNING ABOUT USAGE OF FUNCTIONS INCLUDING
VOID 
RETURN
PARAMETERISED AND NON PARAMETERISED INLUDED WITH PASS BY VALUE AND PASS BY REFERENCE INCLUDING ARRAYS*/
#include<iostream>
using namespace std;
void sum(int num1,int num2){
    cout<< num1 + num2 << endl;
    //THIS IS THE FUNCTION USING VOID AND PARAMETERS
}
void Print_name(){
    cout<< "Hey there this is Saai Namballa" << endl;
    //THIS IS FUCTION USING VOID AND NON PARAMETER
}
int sums(int num1,int num2){
    return num1 + num2;
}
int do_something(int &num1){
    //HERE '&' IS THE ONE THAT IS CONVERTING LOCALLY INTO GLOBAL 
    num1 += 15;
    cout << num1 << endl;
    num1 += 5;
    cout<< "The value of num1 locally is : " << num1 << endl;   
}
//BUT FOR ARRAYS & IS NOT REQUIRED 
void Array(int arr[], int n){
   arr[0]+=5;
   cout<< "The value of arr[0] locally is : " << arr[0] << endl;
}
int main(){
    //int num1;
    //cout<< "Enter anny value : ";
    //cin>> num1;
    //Print_name();
    //sum(1,6);
    //cout<< sums(2,8) << endl;
    //do_something(num1);
    //cout<< "The value of num1 globally is : " << num1 << endl;
    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i+=1){
        cin>> arr[i];
    }
    for(int i = 0; i<n; i+=1){
        cout<< arr[i] << endl;
    }
    Array(arr,n);
    cout<< "The value of arr[0] globally is : " << arr[0] << endl;
    return 0;
}