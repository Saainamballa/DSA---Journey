#include <bits/stdc++.h>
using namespace std;
/*
Write a C++ program to demonstrate the basic operations that can be performed on a deque<int>.

Your program should perform the following operations:

a) Create a deque

Declare an empty double-ended queue capable of storing integers.

b) Insert elements at the back

Insert the following elements at the back of the deque using push_back():

10
20
c) Insert elements at the front

Insert the following elements at the front of the deque using push_front():

30
40
50
d) Create a function to display the deque

Create a function named printdeque() that accepts a deque as a parameter and displays all its elements.

Use an iterator to traverse the deque from begin() to end().

e) Display the deque

Display all elements after performing the above insertions.

f) Display the size

Display the number of elements currently present in the deque using size().

g) Display the first element

Display the first element using front().

h) Delete the first element

Remove the first element using pop_front().

Then display the updated deque.

i) Display the last element

Display the last element using back().

j) Delete the last element

Remove the last element using pop_back().

Then display the final deque.
*/
void printdq(deque<int> dq1)
{
    for(auto itr = dq1.begin(); itr != dq1.end();itr++)
    {
        cout<< *itr << " ";
    }
    cout<< endl;
}
int main()
{
    deque<int> dq1;
    for(int i = 1; i <= 2; i++)
    {
        dq1.push_back(i*10);
    }
    for(int i = 3; i <= 5; i++)
    {
        dq1.push_front(i*10);
    }
    printdq(dq1);
    cout<< "The size of this deque is : "<< dq1.size() << endl;
    cout<< "The 1st element of this deque is : "<< dq1.front() << endl;
   dq1.pop_front();
   printdq(dq1);
   cout<< "The last element of this deque is : "<< dq1.back() << endl;
   dq1.pop_back();
   printdq(dq1);
}