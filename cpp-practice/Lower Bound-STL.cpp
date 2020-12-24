#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,val,e;
    vector<int> v;
    vector<int>::iterator low;
    cin>>n;
    for(auto i=0;i<n;i++)
        {
            cin>>e;
            v.emplace_back(e);
        }
    cin>>q;
    for (int i=0; i<q; i++)
    {
       cin >> val;
       low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
   }
       return 0;
}

/*
For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based)
it is present separated by a space.

If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest
number just greater than that number.

You have to output each query in a new line.

Sample Input
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
 
Sample Output
 Yes 1
 No 5
 Yes 6
 Yes 8

*/


/*
// lower_bound/upper_bound Example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {10,20,30,30,20,10,10,20};
  std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

  std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
*/
