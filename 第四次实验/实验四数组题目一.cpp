#include<iostream>
using namespace std;
int main()
{
	
	int arr[10];
	cout << "请输入十个数字 : " << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	cout << arr[0] << " ";
	for (int m = 1; m < 10; m++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[m] != arr[j])
			{
				if (j == m - 1)
					cout << arr[m] << " ";
				else
					continue;
			}
			else
				break;
		}
	}

	cout << endl;

	return 0;
}