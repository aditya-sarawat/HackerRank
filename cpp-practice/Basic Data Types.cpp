#include <iostream>
int main() 
{
    int i;
    long l;
    char ch;
    float f;
    double d;

    scanf("%d %ld %c %f %lf",&i,&l,&ch,&f,&d);
    printf("%d\n%ld\n%c\n%f\n%lf",i,l,ch,f,d);
}


/*
Input (stdin)
    3 12345678912345 a 334.23 14049.30493
Expected Output
    3
    12345678912345
    a
    334.230
    14049.304930000
*/
