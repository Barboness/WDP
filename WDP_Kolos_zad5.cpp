#include <iostream>

using namespace std;

void piramida(int w, int a)
{
	int b = 0;
	for (int i = 1; i <= w; i++)
	{
		a *= 2;
		b = a;
		for (int j = 1; j <= i; j++)
		{
			cout << b << " ";
			b += a;
		}
		cout << endl;
	}

}

int main()
{
	int w;
	cin >> w;
	int a = 1;
	piramida(w, a);
}
