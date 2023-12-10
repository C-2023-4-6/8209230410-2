#include<iostream>
using namespace std;
#include"mytriangle.h"

int main()
{
	double side1, side2, side3;
	cout << "请输入三角形的三条边 : " << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "面积是 " << double_area(side1, side2, side3) << endl;
	else
		cout << "输出非法" << endl;

	return 0;
}