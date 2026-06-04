#include<iostream>
using namespace std;
int main(){
    //IN THIS CODE I WILL BE LEARNING ABOUT BASICS OF 2D AND 1D ARRAYS AND ALSO I'VE INTEGRATED WITH FOR LOOP
    //STARTING WITH 1D ARRAYS
   /* int arr[5];
    cout << "Enter 5 numbers to store in the array ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout<< arr[1];*/
    //THE ABOVE CODE IS TO MANUALLY DO IT, BUT IF I INTEGRATE FOR LOOP TO IT TO TAKE THE INPUTS DIRECTLY 
    int arr[5];
    cout << "Enter 5 numbers to store in the array ";
    for (int i = 0; i <=4 ; i++)
    {
        cin >> arr[i];
        cout << "The number that is just entered is " << arr[i] << endl ;
    }
    cout<< "The Number you are asking for is " << arr[1] << endl;
    return 0;
}