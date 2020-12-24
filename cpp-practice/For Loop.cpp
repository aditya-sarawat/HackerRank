#include <iostream>
#include <cstdio>
using namespace std;

int main() {
     string x[]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        {
        if( i>9 && i%2==1)
            printf("odd\n");
        else if( i>9 && i%2==0)
            printf("even\n");
        else
            cout<<x[i-1]<<endl;
        }
    return 0;
}
