#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

int main24()
	{
	int hour, min, sec;
	string time;
	getline(cin, time);

	stringstream ss(time);
	char colon;
	ss >> hour >> colon >> min >> colon >> sec;


	cout << min << endl;

	return 0;
	}