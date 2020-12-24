#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,e,x,a,b;
    vector<int> v;
    cin>>n;
    for(auto i=0;i<n;i++)
    {
        cin>>e;
        v.emplace_back(e);
    }
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<"\n";
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}

/*

erase(int position):
Removes the element present at position.  
Ex:             v.erase(v.begin()+4);                  (erases the fifth element of the vector v)

erase(int start,int end):
Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:             v.erase(v.begin()+2,v.begin()+5);      (erases all the elements from the third element to the fifth element.)

Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9

Explanation

The first query is to erase the 2nd element in the vector, which is 4. 
Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4,
which means the 2nd and 3rd elements should be removed.
Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}
*/
