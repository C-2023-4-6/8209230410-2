#include <iostream>
using namespace std;

int yue(int m, int n)
{
	int a = m < n ? m : n;
	for (; m % a != 0 || n % a != 0; a--) {

	}
	return a;
}

int bei(int m, int n)
{
	int k = 1;
	for (int i = 2; i <= m && i <= n; i++)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
	}
	int h;
	h = m * n / k;
	return h;
}
int main()
{
	cout << "�������������� " << endl;
	int m, n;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	cout << endl;
	cout << " �����������������Ϊ�� " << yue(m, n) << endl;
	cout <<  "������������С������Ϊ�� " << bei(m, n) << endl;
	system("pause");
	return 0;
}