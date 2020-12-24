#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

// new class for the exception 
class BadLengthException {

    public:
        int n;
        BadLengthException(int errornumber) {
            n = errornumber;
        }
    
        int what() {
            return n;
        }
};


bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}

/*
You are not responsible for directly printing anything to stdout. If your code is correct, the locked stub code in your editor will print either Valid (if the username is valid), Invalid (if the username is invalid), or Too short: n (where  is the length of the too-short username) on a new line for each n test case.

Input (stdin)
3
Peter
Me
Arxwwz

Output

Valid
Too short: 2
Invalid
*/
