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
	cout << "��һ����ӹ�ժ�ˣ�"<<peach(a)<<"������"<<endl;
	
	system("pause");
	return 0;
}