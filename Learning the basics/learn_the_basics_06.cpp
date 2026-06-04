#include<iostream>
using namespace std;
int main(){
    //IN THIS I WILL BE DOING SWITCH CASE WITH AN EXAMPLE, THIS SWITCH CASE WILL BE USED AS A SWITCH
    //HERE I WANT TO PRINT THE DAY WHEN USER TYPES NUMBER FROM 1 TO 7
    int day;
    cout << "Enter the number to get the day ";
    cin>> day;
    switch(day){
        case 1: 
        cout<< "Monday" << endl;
        break;
        case 2: 
        cout<< "Monday" << endl;
        break;
        case 3: 
        cout<< "Wednesday" << endl;
        break;
        case 4: 
        cout<< "Thursday" << endl;
        break;
        case 5: 
        cout<< "Friday" << endl;
        break;
        case 6: 
        cout<< "Saturday" << endl;
        break;
        case 7: 
        cout<< "Sunday" << endl;
        break;
        default:
        cout<< "Enter correct number from the range of 1-7 ";

    }

    return 0;
}