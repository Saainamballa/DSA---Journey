#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,pair<int,int>> p = {5,{6,9}};
    cout << p.first << " " << p.second.second <<"\n";
    vector<int> vec_int(5,6);
    vec_int.push_back(100);
    vec_int.emplace_back(60);
    cout << vec_int[0];
    vec_int.erase(vec_int.begin()+4,vec_int.begin()+7);
    vec_int.insert(vec_int.begin(), 5);
    for(vector<int>::iterator it = vec_int.begin();it < vec_int.end();it++)
    {
        cout << *it << "\n";
    }
    for(auto it = vec_int.begin(); it < vec_int.end(); it++)
    {
        cout << *it << "\n";
    }
}