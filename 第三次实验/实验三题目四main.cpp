#include<iostream>
using namespace std;
#include"mytriangle.h"

int main()
{
	double side1, side2, side3;
	cout << "�����������ε������� : " << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "����� " << double_area(side1, side2, side3) << endl;
	else
		cout << "����Ƿ�" << endl;

	return 0;
}