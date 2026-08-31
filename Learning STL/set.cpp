#include <bits/stdc++.h>
using namespace std;
/*Write a C++ program to demonstrate the basic operations that can be performed on a set<int>.

Your program should perform the following operations:

a) Create a set

Declare an empty set capable of storing integers.

b) Insert elements

Using a for loop, insert the integers 1 to 10 into the set using insert().

c) Display all elements

Traverse the set using an iterator and display all its elements.

The elements should appear in ascending order, since a set automatically maintains its elements in sorted order.

d) Search for an element

Check whether the value:

2

is present in the set using the find() function.

If it is present, display:

2 is present in set
e) Delete the first element

Delete the first element of the set using:

s.erase(s.begin());

Then display all the remaining elements.

f) Find the size

Display the number of elements currently present in the set using size().

g) Check whether the set is empty

Use the empty() function to check whether the set contains any elements.

Display either:

The set is not empty

or:

The set is empty
h) Clear the set

Remove all elements from the set using clear().

i) Verify the clear operation

After clearing the set, display its size.

The output should be:

Size of the set after clearing all the elements: 0
*/
int main()
{
    set<int> s1;
    for(int i = 1; i<=10;i++)
    {
        s1.insert(i);
    }
    for(auto itr =s1.begin();itr !=s1.end();itr++ )
    {
        cout << *itr << " ";
    }
    cout<< endl;
    if(s1.find(2)!=s1.end())
    {
        cout<< "The element is there in the set "<< endl;
    }
    else
    {
        cout<< "The element is not there in the set "<< endl;
    }
    s1.erase(s1.begin());
    for(auto itr =s1.begin();itr !=s1.end();itr++ )
    {
        cout << *itr << " ";
    }
    cout<< endl;
    cout<< "The size of the set is : " << s1.size() << endl;
    if(s1.empty()== true)
    {
        cout << "The set is empty" << endl;
    }
    else
    {
        cout << "The set is not empty" << endl;
    }
    s1.clear();
    if(s1.empty()== true)
    {
        cout << "The set is empty" << endl;
    }
    else
    {
        cout << "The set is not empty" << endl;
    }
    cout << "The size of the set now is : " << s1.size() << endl;

}