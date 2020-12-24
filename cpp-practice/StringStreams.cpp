#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	stringstream ss(str); 
	vector<int> result;
	char ch;
	int tmp;
	while(ss >> tmp) 
    	{      
    		result.push_back(tmp);
    		ss >> ch;
    	}   
    	return result;
}

int main()
 {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

/*
Let me start with streams as such: streams are potentially endless sources of data input or data output. Take the STDIN, where potentially endless data can come in. Streams provide an interface to such an device, they capsulate it and provide means to get the information of such streams, or to put them into those devices.

In the first line with question mark (stringstream ss(str)) you create a new stream. However this is a stringstream, so as source you do not provide a streaming device, but a string. As the text for the problem says, in C++ these streams are used for extraction of different data types in a string. So, what we get in line in question is a stringstream object called ss, that encapsulates a string, and allows as to access the string as we could access any other stream (remember that cin and cout are streams as well).

Now to the second line. ss >> tmp is a simple extraction. Remember cin >> a from previous exercises. It does the same thing here: Get me the next thing on the stream (which actually is a string) and put it in the variable tmp. Now the trick is, that tmp is of type int, so only if the next thing in the stream is an integer value will this work. The while(ss >> tmp) checks, if it actually did work. If the string is empty (I'm not sure with C++ but in C, strings terminate with an invisible character \0), or if the next thing is not a number, then the test fails, and while skips the rest.

For the last line we are now in the body of the while loop, so the last character was a number and it got saved into tmp. As en example, let's say we had "1,2", then now the 1 is extracted as integer and saved into tmp, and the remaining string in the stream is ",2". We can add that number to the vector (result.push_back(tmp);), and due to the structure of the string, which we know, we now expect the next element to be of type character, as it is the ,. We need to extract that from the string, because otherwise in the next loop of the while case will try to extracht a number as the next thing of the string, but gets the comma, which cannot be extracted as integer, and therefore the loop condition will fail and we jump out after only the first extracted number.

We actually never use ch, it's just to get rid of all the commas and make the loop work.

*/
