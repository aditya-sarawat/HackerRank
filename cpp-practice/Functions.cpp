#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int x;
    if(a>=b && a>=c && a>=d)
        x=a;
    else if(b>=a && b>=c && b>=d)
        x=b;
    else if(c>=b && c>=a && c>=d)
        x=c;
    else if(d>=b && d>=c && d>=a)
        x=d;
    return x;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
