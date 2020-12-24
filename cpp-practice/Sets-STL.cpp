#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    int q,y,x;
    set<int> s;
    cin>>q;
    for(auto i=0;i<q;i++)
    {
        cin>>y>>x;
        switch(y)
        {
        case 1: s.insert(x);
                break;
        case 2: s.erase(x);
                break;
        case 3: cout << (s.find(x) == s.end() ? "No" : "Yes") << endl;
        }
    }
    return 0;
}

/*

  1: Add an element x to the set.
  2: Delete an element x from the set. (If the number  is not present in the set, then do nothing).
  3: If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
  
  Output Format

For queries of type  print "Yes"(without quotes) if the number x is present in the set and if the number is not present,then print "No"(without quotes).
Each query of type  should be printed in a new line.

Sample Input

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
Sample Output

Yes
No
No
*/
