#include <stdio.h>
#include <iostream>


using namespace std;
int main()
{	
    reload:
	cout << "입력하실 횟수를 입력해주세요" << endl;
	int n, m;

	cin >> n;
	
	cout << "0을 적으면 프로그램이 " << n << "번 실행하기 전에 종료됩니다." << endl;
	for (int i = 0; i <= n; i++)
		{
		cin >> m;
		if (m != 0)
			{
				cout << m << endl;
			}
		else
			{
			cout << "프로그램 시작점으로 돌아갑니다." << endl;
			goto reload;
			}
		}

}