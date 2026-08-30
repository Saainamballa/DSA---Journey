#include <bits/stdc++.h>
using namespace std;
void swap_function(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}
void bubble_sorting(int arr[], int n)
{
 for(int i = n-1;i >= 0;i--)
 {
    int didswitch = 0;
    for(int j = 0; j<i;j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap_function(arr[j],arr[j+1]);
            didswitch = 1;
        }
    }
    if(didswitch == 0)
    {
        break;
    }
    cout<< "runs\n";
 }
 for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int ar[] = {16,12,1,60,25};
    bubble_sorting(ar,5);
}
// TIME COMPLEXITY OF THIS SORTING IS O(N2) FOR WORST AND AVG CASES
// BUT FOR BEST CASE IT IS O(N)