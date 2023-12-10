#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	for (int a = 2; a <= num / 2; a++)
	{
		if (num % a == 0)
		{
			return false;
		}
	}
	return true;
}
void liangbai(int b) {
	int c = 10,d=0,a=2;
	while(d<b)
	{
		if (is_prime(a))
		{
			d++;
			if (d % c == 0)
			{
				cout << setw(5) << a << endl;
			}
			else
				cout << setw(5)<< a;
		}
		a++;
	}
}

int main() {
	
	liangbai(200);

	system("pause");
	return 0;
}