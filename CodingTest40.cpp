#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main40()
{
	int a, b;
	cin >> a >> b;
	double x = a;  double y = b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << fixed << setprecision(3) << x / y << endl;

	return x;
}