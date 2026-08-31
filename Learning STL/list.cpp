#include <bits/stdc++.h>
using namespace std;
/*
Write a C++ program to demonstrate the basic operations that can be performed on a list<int>.

Your program should perform the following operations:

a) Create a list

Declare an empty list capable of storing integers.

b) Insert elements at the back

Insert the following elements at the back using push_back():

10
20
c) Insert elements at the front

Insert the following elements at the front using push_front():

30
40
50
d) Create a function to display the list

Create a function named printlist() that accepts a list as a parameter and displays all its elements.

Use a list<int>::iterator to traverse the list from begin() to end().

e) Display the original list

Display all the elements currently present in the list.

f) Reverse the list

Reverse the order of all elements using the reverse() function.

Display the list after reversing it.

g) Sort the list

Sort all elements in ascending order using the sort() function.

Display the sorted list.

h) Display the size

Display the number of elements currently present using size().

i) Display the first element

Display the first element using front().

j) Delete the first element

Remove the first element using pop_front().

Display the updated list.

k) Display the last element

Display the last element using back().

l) Delete the last element

Remove the last element using pop_back().

Display the final list.
*/
void printlist(list<int> l1)
{
    for(auto itr = l1.begin();itr != l1.end();itr++)
    {
        cout << *itr << " ";
    }
    cout<< endl;
}
int main()
{
    list<int> l1;
    for(int i = 1; i<=2; i++)
    {
        l1.push_back(i*10);
    }
    for(int i = 3; i<=5; i++)
    {
        l1.push_front(i*10);
    }
    printlist(l1);
    l1.reverse();
    printlist(l1);
    l1.sort();
    printlist(l1);
    cout<< "The size of the list : "<< l1.size()<< endl;
    cout<< "The 1st element of the list : "<< l1.front()<< endl;
    cout<< "The 1st element is deleted "<< endl;
    l1.pop_front();
    printlist(l1);
    cout<< "The last element of the list : "<< l1.back()<< endl;
    cout<< "The last element is deleted "<< endl;
    l1.pop_back();
    printlist(l1);

}