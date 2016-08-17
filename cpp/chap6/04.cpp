#include <iostream>
using namespace std;

class Integer {
public:
	int m_value;

	Integer(int num = 1);
	void Show();
};

Integer::Integer(int num) {
	m_value = num;
}

void Integer::Show() {
	cout << m_value << endl;
}

int main() {
	Integer array[4] = {
		Integer(),
		Integer(3),
		Integer(9),
	};
	for (int i = 0; i < sizeof array / sizeof array[0]; ++i) {
		array[i].Show();
	}
}
