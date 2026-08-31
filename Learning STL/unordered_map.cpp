#include <bits/stdc++.h>
using namespace std;
/*
Write a C++ program to demonstrate the basic operations that can be performed on an unordered_map<int, int>.

Your program should perform the following operations:

a) Create an unordered map

Declare an empty unordered_map where both the key and value are integers.

b) Insert key-value pairs

Using a for loop, insert 5 key-value pairs into the map.

For each value of i from 1 to 5:

key   = i
value = i × 10

Therefore, the map should contain pairs equivalent to:

1 → 10
2 → 20
3 → 30
4 → 40
5 → 50
c) Display the elements

Traverse the unordered_map using an iterator and display each key-value pair.

Display the key and corresponding value separately.

Note: Since this is an unordered_map, the elements do not have to appear in sorted or insertion order.

d) Search for a key

Search for the key:

2

using the find() function.

If the key exists, display:

2 is present in map
e) Delete an element

Delete the element pointed to by begin() using erase().

Then display all the remaining key-value pairs.

Remember: unordered_map does not guarantee which element begin() points to.

f) Find the size

Display the current number of key-value pairs using size().

g) Check whether the map is empty

Use empty() to check whether the map contains any elements.

Display an appropriate message:

The map is not empty

or

The map is empty
h) Clear the map

Remove all key-value pairs using clear().

i) Verify the clear operation

Display the size of the map after clearing it.

The expected size should be:

0
*/
int main()
{
    unordered_map<int, int> um1;
    for(int i = 1; i <=10; i++)
    {
        um1.insert({i,i*10});
    }
    cout<< "KEY\tVALUE" << endl;
    for(auto itr = um1.begin(); itr != um1.end();itr++)
    {
        cout<< itr ->first << "\t" << itr ->second<< endl;
    }
    if(um1.find(2)!= um1.end())
    {
        cout<< "The element 2 is there in the map "<< endl;
    }
    um1.erase(um1.begin());
    cout<< "KEY\tVALUE" << endl;
     for(auto itr = um1.begin(); itr != um1.end();itr++)
    {
        cout<< itr ->first << "\t" << itr ->second<< endl;
    }
    cout<< "The size of the map is : "<< um1.size()<< endl;
    if(um1.empty() == true)
    {
        cout << "The map is empty" << endl; 
    }
    else
    {
        cout << "The map is not empty" << endl; 
    }
    um1.clear();
    if(um1.empty() == true)
    {
        cout << "The map is empty" << endl; 
    }
    else
    {
        cout << "The map is not empty" << endl; 
    }
    cout << "The updated size of the map is : " << um1.size()<< endl;
}
//Map is also similar to this unordered map so I am not doing it.
// and unordered map is capable of storing duplicate values