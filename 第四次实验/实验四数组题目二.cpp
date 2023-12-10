#include<iostream>
using namespace std;
const int listSize = 10;
void bubble(double list[10]) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	
	double list[listSize];
	cout << "请输入十个数字：";
	for (int i = 0; i < listSize; i++) {
		
		cin >> list[i];
	}
	bubble(list);
	cout << "排列后为：";
	for (int m = 0; m < listSize; m++) {
		
		cout << list[m] << "  ";
	}
	system("pause");
	return 0;
}