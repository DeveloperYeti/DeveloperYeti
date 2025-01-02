#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main25() 
{
	int Year, Month, Day;
	
	string y;
	getline(cin, y);
	stringstream ss(y);
	char dot;

	char dash;

	ss >> Year >> dot >> Month >> dot >> Day;
	
	cout << Day << "-" << Month << "-" << Year;

	return 0;
}
