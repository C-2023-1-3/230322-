#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	int k = 1;
	int i = 1;
	while (i <= m && i <= n)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
		i++;
	}
	return k;
}
 int lcm(int m, int n)
 {
	 int k = 1;
	 for (int i = 2;i <= m && i <= n;i++)
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
	int m, n;
	cout << "m=" << endl;
	cin >> m ;
	cout << "n=" << endl;
	cin >> n;
	cout << "最大公约数为：" <<gcd(m,n)<< endl;
	cout << "最小公倍数为：" <<lcm(m,n)<< endl;
	return 0;
}