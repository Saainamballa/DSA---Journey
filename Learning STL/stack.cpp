#include <bits/stdc++.h>
using namespace std;
/*
Write a C++ program to demonstrate the basic operations that can be performed on a stack<int>.

Your program should perform the following operations:

a) Create a stack

Declare an empty stack capable of storing integers.

b) Insert elements

Using a for loop, insert the integers 1 to 5 into the stack using push().

c) Create a function to display the stack

Create a function named printstack() that accepts a stack as a parameter and displays all its elements.

Inside the function:

Create a copy of the received stack.
Continue until the copied stack becomes empty.
Access the top element using top().
Print the top element.
Remove it using pop().

The original stack should remain unchanged.

d) Display all elements

Call printstack() to display the elements of the stack.

Since a stack follows LIFO, the expected order should be:

5
4
3
2
1
e) Display the size

Display the number of elements currently present in the stack using size().

f) Display the top element

Display the element currently at the top of the stack using top().

g) Remove the top element

Remove the top element using pop().

h) Display the stack after deletion

Call printstack() again and display the remaining elements.

The output should now be:

4
3
2
1
*/
void printstack(stack<int> s1)
{
    while(!s1.empty())
    {
        cout<< s1.top() << " ";
        s1.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s1;
    for(int i = 1 ; i<=5; i++)
    {
        s1.push(i);
    }
    printstack(s1);
    cout<< "The size of the stack is : "<< s1.size()<< endl;
    cout<< "The top element of the stack is : "<< s1.top()<< endl;
    cout<< "removing top of the stack "<< endl;
    s1.pop();
    printstack(s1);

}