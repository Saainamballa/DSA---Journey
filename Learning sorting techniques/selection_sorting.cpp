#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
//SWAP FUNCTION
void swap_function(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}
//SELECTION SORT FUNCTION
void selection_sort(int arr[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int mini = arr[i];
        for(int j = i; j< n; j++) 
        {
            if(arr[j] < mini)
            {
                mini = arr[j];
                swap_function(arr[i],arr[j]);
            }
        }     
    }
for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int ar[] = {15,12,0,60,24,12,36,444,78,45,46,10};
    auto start = high_resolution_clock::now();
    selection_sort(ar,12);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout<< "\n" <<"Time taken : "<< duration.count() << " milliseconds ";
}
//TIME COMPLEXITY OF THIS SELECTION SORTING IS ~ O(N2)