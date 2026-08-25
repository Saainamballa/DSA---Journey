#include <bits/stdc++.h>
using namespace std;
//IN THIS PROBLEM I WILL BE DOING PATTERN 09 USING NESTED LOOPS,THE LOOP THAT I WILL BE DOING IS :
/* 1
   0 1
   1 0 1
   0 1 0 1
   1 0 1 0 1
 */
void pattern_11(int N)
{
    int zero = 0;
    int one = 1;
    for(int i = 0; i < N; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j % 2 == 0)
                {
                    cout << one << " ";
                }
                else
                {
                    cout << zero << " ";
                }
            }
        }
        else
        {
             for(int j = 0; j <= i; j++)
            {
                if(j % 2 == 0)
                {
                    cout << zero << " ";
                }
                else
                {
                    cout << one << " ";
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    pattern_11(10);
}