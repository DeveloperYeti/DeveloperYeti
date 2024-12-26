#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main18()
{
	int FNum , BNum;

	string registrationNum;
	getline(cin, registrationNum);
	
	stringstream ss(registrationNum);
	char dash;
	ss >> FNum >> dash >> BNum;
	cout << FNum << dash << BNum;

	return 0;

}