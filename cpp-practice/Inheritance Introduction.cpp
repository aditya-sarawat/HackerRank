#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{   // here the Triangle class is inherited by the Isosceles class along with all its property
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		void description(){
             cout<<"In an isosceles triangle two sides are equal\n";
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}

/*
Sample Output

I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle
*/
