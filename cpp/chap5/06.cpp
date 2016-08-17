#include <iostream>
using namespace std;

int main () {
	int a, b;
	
	cout << "input 2 values > " << flush;
	cin >> a >> b;

	cout << "greater value is " << (a > b ? a : b) << "." << endl;
}
