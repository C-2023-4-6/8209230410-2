#include<iostream>
using namespace std;
int peach(int a) {
	for (int i = 1; i < 10; i++) {
		a = 2 * (a + 1);
	}
	return a;
}
int main() {
	int a = 1;
	cout << "第一天猴子共摘了："<<peach(a)<<"个桃子"<<endl;
	
	system("pause");
	return 0;
}