#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
/*Write a C++ program to demonstrate the basic operations that can be performed on a vector<int>.

Your program should perform the following operations:

a) Create a vector

Declare an empty vector capable of storing integers.

b) Insert elements into the vector

Using a for loop, insert the integers 0 to 9 into the vector using push_back().

c) Display the vector using iterators

Traverse the vector using:

begin()
end()
an iterator

Display all the elements.

d) Access the first and last elements

Display:

The first element using front()
The last element using back()
e) Find the size

Display the number of elements currently present in the vector using size().

f) Remove the last element

Before removing the last element:

Display the last element.
Remove it using pop_back().

Then display the vector again to verify that the last element has been removed.

g) Insert an element at the beginning

Insert the value:

5

at the beginning of the vector using insert() and begin().

Display the new first element.

h) Remove the first element

Remove the first element using:

erase()

along with an iterator pointing to the beginning.

Then display the new first element.

i) Check whether the vector is empty

Use empty() to determine whether the vector contains any elements.

Display an appropriate message:

vector is empty

or

vector is not empty
j) Clear the vector

Remove all elements from the vector using clear().

Finally, display the size of the vector after clearing it.*/
int main()
{
    vector<int> vec1;
    for(int i = 0; i<=9; i++)
    {
        vec1.push_back(i);
    }
    for(auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout<< "The 1st element is " << vec1.front() << endl;
    cout<< "The last element is " << vec1.back() << endl;
    cout<< "The size of the vector is " << vec1.size() << endl;
    cout<< "The last element is " << vec1.back() << endl;
    vec1.pop_back();
    for(auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    auto iter = vec1.begin();
    vec1.insert(iter,5);
    cout<< "The 1st element is " << vec1.front() << endl;
    vec1.erase(iter);
    cout<< "The 1st element is " << vec1.front() << endl;
    if(vec1.empty() == true )
    {
        cout<< "The vector is empty " << endl;
    }
    else
    {
         cout<< "The vector is not empty " << endl;
    }
    vec1.clear();
    cout<< "The size of the vector is " << vec1.size() << endl;

}