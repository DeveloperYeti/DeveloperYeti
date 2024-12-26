#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main17()
{
	int y, m, d;
	string input_string;
	getline(cin, input_string);

	stringstream ss(input_string);

	char dot;
	ss >> y >> dot >> m >> dot >> d;
	cout << y << dot << m << dot << d;
	return 0;
}