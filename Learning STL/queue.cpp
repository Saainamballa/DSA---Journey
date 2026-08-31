#include <bits/stdc++.h>
using namespace std;
/*
Write a C++ program to demonstrate the basic operations that can be performed on a queue<int>.

Your program should perform the following operations:

a) Create a queue

Declare an empty queue capable of storing integers.

b) Insert elements

Using a for loop, insert the integers 1 to 5 into the queue using push().

c) Display all elements

Create a separate function named printqueue() that accepts a queue as a parameter and displays all its elements.

The function should:

Continue while the queue is not empty.
Access the front element using front().
Print the element.
Remove the front element using pop().

Important: The original queue should remain unchanged after calling printqueue().

d) Display the size

Display the number of elements currently present in the queue using size().

e) Display the front element

Display the first element of the queue using front().

f) Display the last element

Display the last element of the queue using back().

g) Remove the front element

Remove the front element from the queue using pop().

h) Display the queue after deletion

Call printqueue() again to display the remaining elements.
*/
void printqueue(queue<int> q1)
{
    while(!q1.empty())
    {
        cout<< q1.front() << " ";
        q1.pop();
    }
    cout<< endl;
}
int main()
{
    queue<int> q1;
    for(int i = 1;i<=5;i++)
    {
        q1.push(i);
    }
    printqueue(q1);
    cout<< "The size of the queue is : "<< q1.size() << endl;
    cout<< "The front element is : "<< q1.front() << endl;
    cout<< "The last element is : "<< q1.back() << endl;
    cout<< "front element is removed " << endl;
    q1.pop();
    printqueue(q1);
}