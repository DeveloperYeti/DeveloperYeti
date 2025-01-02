#include <stdio.h>
#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
// 로또 프로젝트 메인 문


using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a + b<< endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << a / b << setprecision(3);

}