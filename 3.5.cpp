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
	cout << "猴子共摘" << num << "个桃子" << endl;
	return 0;
}