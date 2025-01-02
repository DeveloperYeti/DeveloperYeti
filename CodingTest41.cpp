#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main41()
{
	int a, b, c;
	cin >> a >> b >> c;

	double x = a;
	double y = b;
	double z = c;

	cout << a + b + c << endl;
	cout << fixed << setprecision(1) << (x + y + z) / 3 << endl;
	return x;
}