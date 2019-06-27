// 3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
#include"iomanip"
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int sum = 0;
	int count = 0;
	for (int i = A; i <= B; i++)
	{
		sum += i;
		count++;
		cout << setw(5) << i;
		if (count % 5 == 0)
		{
			cout << endl;
		}
		else if (i == B)
		{
			cout << endl;
		}
	}

	cout << "Sum = " << sum << endl;
	system("pause");
	return 0;
}