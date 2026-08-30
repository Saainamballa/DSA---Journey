#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
/*
Write a C++ program to demonstrate the basic operations performed on an unordered_set of integers.

Your program should perform the following tasks:

a) Create an unordered set

Declare an unordered_set capable of storing integers.

b) Insert elements

Insert the integers 1 to 10 into the unordered set using a loop.

c) Display all elements

Traverse the unordered set using an iterator and display all its elements.

Note: Since this is an unordered_set, the elements do not have to be displayed in sorted order.

d) Search for an element

Take the value:

n = 2

and check whether 2 is present in the unordered set using the find() function.

If it exists, display:

2 is present in unordered set
e) Delete an element using an iterator

Delete the first element returned by s.begin() using the erase() function.

Then display all the remaining elements.

f) Find the size

Display the number of elements currently present in the unordered set using the size() function.

g) Check whether the set is empty

Use the empty() function to check whether the unordered set contains any elements.

Display an appropriate message such as:

The unordered set is not empty

or

The unordered set is empty
h) Clear the set

Remove all elements from the unordered set using the clear() function.

i) Verify the clear operation

After clearing the set, display its size using size().

The expected size should be:

0
 */
int main()
{
    unordered_set<int> s;
    for(int i = 1; i<=10; i++)
    {
        s.insert(i);
    }
    for(auto it = s.begin();it != s.end();it++)
    {
        cout<< *it << " ";
    }
    cout<< endl;
    int t = 2;
    if(s.find(2) != s.end())
    {
        cout<< "The element is in the unordered set "<< endl;
    }
    else
    {
        cout<< "The element is not in the unordered set "<< endl;
    }
    s.erase(s.begin());
    for(auto it = s.begin();it != s.end();it++)
    {
        cout<< *it << " ";
    }
    cout<< endl;
    cout<<"The size of the set is "<< s.size()<<endl ;
    if(s.empty() == true)
    {
        cout << "The unordered set is empty"<< endl;
    }
    else
    {
        cout<< "The unordered set is not empty"<< endl;
    }
    s.clear();
    if(s.empty() == true)
    {
        cout << "The unordered set is empty"<< endl;
    }
    else
    {
        cout<< "The unordered set is not empty"<< endl;
    }
    cout << s.size();
}