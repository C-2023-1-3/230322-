#include<iostream>
using namespace std;
int main()
{
	int day=1, num=1;
	while (day <= 9)
	{
		num = (num + 1) * 2;
		day++;
	}
	cout << "���ӹ�ժ" << num << "������" << endl;
	return 0;
}