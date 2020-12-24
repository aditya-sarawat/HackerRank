#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,e;
    vector<int> vec;
    cin>>n;
    for(auto i=0;i<n;i++)
    {   
        cin>>e;
        vec.emplace_back(e);
    } 
    sort(vec.begin(),vec.end());
    for(auto it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
    return 0;
}

/*
Declaration:                                  vector<int>v; (creates an empty vector of integers)
Size:                                         int size=v.size();
Pushing an integer into a vector:             v.push_back(x);(where x is an integer.The size increases by 1 after this.)
Popping the last element from the vector:     v.pop_back(); (After this the size decreases by 1)
Sorting a vector:                             sort(v.begin(),v.end()); (Will sort all the elements in the vector)

Sample Input--------------------------

5
1 6 10 8 4

Sample Output---------------------------

1 4 6 8 10

*/
