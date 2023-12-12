#include<iostream>
using namespace std;
int main()
{
	const int s = 100;
	bool list[s];
	for (int a = 0;a < s;a++)
	{
		list[a] = false;
	}
	for (int b = 0;b < s;b++)
	{
		for (int c = b;c < s;c+=b+1)
			if (list[c])
				list[c] = false;
			else list[c] = true;
	}
	for (int m = 0;m < s;m++)
	{
		if (list[m])
			cout << "  " << m + 1 << endl;

	}
	return 0;
}