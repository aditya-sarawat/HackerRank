// must refer- http://www.cplusplus.com/reference/library/manipulators/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
        // LINE 1 
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part



	}
	return 0;

}


/*
So for anyone unfamiliar, C++ has a variety of things called "manipulators" that will change the format of the output printed with "cout". These things are not printed themselves, they just affect the part you are actually printing. A list of these manipulators can be found on this page.

In each of the three outputs, I have put all the relevant manipulators on one line, followed by the actual value which is being printed on the next line.

Initial Code

This problem actually forces two manipulators on you initially which don't seem to be helpful at all. These manipulators are setw and internal. The former sets a fixed width for the output (in this case 15 characters wide) and the latter will align it to the right. We need to basically undo this in the first printed line because we want the hexadecimal printout to be left-aligned instead.

Printed Line 1

The manipulators I used here are hex (which will output the number in hexadecimal format), left (which will align the number to the left), showbase (which will make sure the hexadecimal number has a '0x' at the beginning), and nouppercase (which converts all alphabetic hexadecimal values to lowercase).

Printed Line 2 In this section, I actually have to undo some of the previous manipulations.

dec: switches numbers from hexadecimal back to decimal.
right: aligns values to the right instead of the left
setw(15): sets a fixed width of 15, as the effect from the initial code only impacts the first printed line.
setfill('_'): by default, when you have a fixed width, if your printed value doesn't fill up the entire length (for example, if you have a width of 15 and only print 7 characters), the extra characters used to pad are whitespaces. This function lets you change the padding to whatever character you want.
showpos: Makes sure there is a plus sign before any positive numbers
fixed: ensures that number is printed out entirely and that scientific notation isn't used for larger numbers
setprecision(2): sets the number of decimal places to 2.
Printed Line 3

scientific: Prints output in scientific notation format
uppercase: Undoes previous nouppercase manipulator and ensures that the 'E' in the scientific notation is capitalised
noshowpos: Undoes previous showpos manipulator and gets rid of the plus at the start of positive values
setprecision: Changes the number of digits after the decimal place from 2 to 9.
*/


/*
Input Format

The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines describes a test case as 3 space-separated floating-point numbers:A ,B , and ,C respectively.

Output Format

For each test case, print 3 lines containing the formatted A,B , and C respectively. Each A ,B , and C  must be formatted as follows:

A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
B: Print it to a scale of  decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.

Sample Input
1  
100.345 2006.008 2331.41592653498

Sample Output
0x64             
_______+2006.01  
2.331415927E+03
*/
