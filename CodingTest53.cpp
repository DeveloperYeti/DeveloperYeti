#include <stdio.h>
#include <iostream>
#include <bitset>


using namespace std;
int main53()

{	
	int num;
	cin >> num;
	cout << bitset<16>(num);
	cout << ~num;
	return 0 ;
}