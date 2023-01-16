#include <iostream>
using namespace std;
int sumowanie(int n)
{
	int suma2 = 0;
	int suma = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n > 2)
		{
			suma = 6 * i;
			suma2 += 6 * i;
			cout << suma << ",";
		}
	}
	cout << endl;
	return suma2;
}

int main()
{
	int n;
	cin >> n;
	cout << sumowanie(n);
}
