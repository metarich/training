#include <iostream>
using namespace std;

const int MAX_NAME = 10;

struct Human {
	char name[MAX_NAME];
	int length;
	double weight;
};

int main() {
	Human tomita = {"KENTOMITA", 162, 57.8, };


	cout << tomita.name << endl;
}
