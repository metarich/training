#include "IntArray.h"
#include <iostream>
#include <cstdlib>
using namespace std;

IntArray::IntArray(int size) {
	m_array = new int[size];
	m_size = size;
}

IntArray::IntArray(const IntArray& other) {
	m_array = new int[other.m_size];
	m_size = other.m_size;

	copy(other.m_array, other.m_array + m_size, m_array);

	cout << "copy construct is called" << endl;
}

IntArray::~IntArray() {
	delete [] m_array;
	
	cout  << "destruct is called " << m_size << endl;
}

void IntArray::operator=(const IntArray& other) {
	int* array = new int [other.m_size];

	delete[] m_array;
	m_array = array;
	m_size = other.m_size;
	copy(other.m_array, other.m_array + m_size, m_array);
}

int IntArray::Get(int i) const {
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value) {
	CheckIndex(i);
	m_array[i] = value;
}

int IntArray::Size() const {
	return m_size;
}

void IntArray::CheckIndex(int i) const {
	if(0 <= i && i < m_size) {
		// index ok
	} else {
		cout << "illegal index!" << endl
			<< "value : " << i << endl;
		exit(EXIT_FAILURE);
	}
}
