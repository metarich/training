#include <iostream>
using namespace std;

void ShowAdd(char* pointer) {
	cout << "pointer : " << (size_t)pointer << endl;

	for (int i = 0; i < 10; ++i) {
		cout << "&pointer[" << i << "] : " << (size_t)&pointer[i] << endl;
	}
	cout << sizeof pointer / sizeof pointer[0] << endl;
	cout << sizeof pointer << "pointer" << endl;
	cout << sizeof pointer[0] << "pointer[0]" << endl;
	cout << 2["hoge"] << " 2[hoge]" << endl;
}


int main() {
	char array[10];
	cout << "array : " << (size_t)array << endl;

	for (int i = 0; i < 10; ++i) {
		cout << "&array[" << i << "] : " << (size_t)&array[i] << endl;
	}
	cout << sizeof array / sizeof array[0] << endl;
	cout << endl;

	ShowAdd(array);
}
