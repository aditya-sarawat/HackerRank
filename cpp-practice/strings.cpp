#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char s=a[0];          // We can also use
    a[0]=b[0];           //  swap( a[0], b[0] );
    b[0]=s;
    cout<<a<<" "<<b;
    return 0;
}

/*
Input (stdin)
  abcd
  ef
Output
  4 2
  abcdef
  ebcd af
*/
