/*
Anna Reed
7/31/2021
CIS 1202
*/
#include <cmath>
#include <iostream>

using namespace std;

template <class T>
T half(T);
int half(int);

int main() {

	//variables
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	//diplaying output
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	return 0;
}

//template function
template <class T>
T half(T num) {

	return (num/2);
}

//int function
int half(int num) {

	return round((static_cast<double>(num))/2);
}
