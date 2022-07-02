// CMakeHelloWorld.cpp: определяет точку входа для приложения.
//

#include "CMakeHelloWorld.h"

using namespace std;

string concat(string s1, string s2) { return s1 + s2; }

int main() {
	cout << "Hello CMake and Git." << endl;
    cout << concat("Test ", " branch.") << endl;
    cout << "Test branch merge." << endl;
	return 0;
}
