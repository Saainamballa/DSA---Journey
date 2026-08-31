#include <bits/stdc++.h>
using namespace std;
/*
Write a C++ program to demonstrate the basic operations that can be performed on an unordered_multiset<int>.

Your program should perform the following operations:

a) Create an unordered multiset

Declare an empty unordered_multiset capable of storing integers.

b) Insert elements

Using a for loop, insert the integers 1 to 10 into the unordered_multiset.

c) Insert a duplicate element

Insert the value 5 one additional time to demonstrate that an unordered_multiset allows duplicate elements.

d) Display all elements

Traverse the unordered_multiset using an iterator and display all its elements.

Note: The elements do not need to appear in sorted or insertion order.

e) Search for an element

Check whether the value 2 exists in the unordered_multiset using find().

If found, display:

2 is present in unordered multiset
f) Delete an element using an iterator

Delete the element pointed to by s.begin() using erase().

Then display all remaining elements.

g) Find the size

Display the number of elements currently present using size().

h) Check whether the multiset is empty

Use empty() to check whether the unordered_multiset contains any elements.

Display an appropriate message.

i) Clear the multiset

Remove all elements using clear().

j) Verify the clear operation

Display the size of the unordered_multiset after clearing it.

The expected size should be:

0
*/
int main()
{
    unordered_multiset<int> unm;
    for(int i = 1; i<=10; i++)
    {
        unm.insert(i);
    }
    unm.insert(5);
    for(auto itr = unm.begin(); itr != unm.end(); itr++)
    {
        cout<< *itr << " ";
    }
    cout<< endl;
    if(unm.find(2)!= unm.end())
    {
        cout<< "The element is there "<< endl;
    }
    unm.erase(unm.begin());
     for(auto itr = unm.begin(); itr != unm.end(); itr++)
    {
        cout<< *itr << " ";
    }
    cout<< endl;
    cout<< "The size of this set is : "<< unm.size() << endl;
    if(unm.empty() == true)
    {
        cout << "The set is empty "<< endl;
    }
    else
    {
        cout<< "The set is not empty "<< endl;
    }
    unm.clear();
    if(unm.empty() == true)
    {
        cout << "The set is empty "<< endl;
    }
    else
    {
        cout<< "The set is not empty "<< endl;
    }
    cout << "Now the size is : "<< unm.size() << endl;
}
//Note that multiset also contains same properties, so I am doing them again