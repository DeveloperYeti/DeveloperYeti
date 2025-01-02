#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main23()
{	

	string a;
	int temp = 0;
	int square = 10000;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
		{
			temp = a[i] - '0';
			cout << temp * square << endl;
			square /= 10;
			                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
		}
	return 0;
}
