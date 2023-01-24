#include <iostream>
#include <vector>
using namespace std;

//suma czesciowa
int sumacz(vector<int>tab)
{
	int suma = 0;
	int max = 0;
	while (tab.size())
	{
		suma = 0;
		for (int i = 0; i < tab.size(); i++)
		{
			suma += tab[i];
			if (suma > max)
			{
				max = suma;
			}
		}
		tab.erase(tab.begin());
	}
	return max;
}

//najdluzszy ciag parzystych
int parz(vector<int>tab)
{
	int wynik = 0;
	int max = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		if(tab[i]%2==0)
		{
			wynik++;
		}
		else
		{
			wynik = 0;
		}
		if (wynik > max)
		{
			max = wynik;
		}
	}
	return max;
}

//suma podzielnych przez a mniejszych od b
int sum(int n = 5, int a= 3, int b=7)
{
	vector<int>tab = { 6,8,9,3,3,20,1 };
	int wynik = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % a == 0 && tab[i] < b)
		{
			wynik += tab[i];
		}
	}
	return wynik;
}

// sprawdzanie dzielnika 
void potegowanie(int x = 9)
{
	int y = 2;
	while (x != y)
	{
		int wynik = 0;
		int n = 2;
		while (wynik < x)
		{
			wynik = pow(y, n);
			if (wynik == x)
			{
				cout << "y = " << y << ", n = " << n << ", bo " << y << "^" << n << " = " << x << endl;
				return;
			}
			n++;
		}
		y++;
	}
	cout << "NIE";
}

//wypisanie n najmniejszych liczb pierwszych
void pierwsze(int n)
{
	int pierwsza = 1;
	int liczbap = 0;
	while (liczbap!=n)
	{
		int ilosc = 0;
		for (int i = 1; i <= pierwsza; i++)
		{
			if (pierwsza%i==0)
			{
				ilosc++;
			}
		}
		if (ilosc == 2)
		{
			cout << pierwsza << endl;
			liczbap++;
		}
		pierwsza++;
	}
}

int main()
{
	vector<int>p = { 2,4,-6,7 };
	vector<int>n = { 1,8,2,4,6,7,5,12,18 };
	cout << sumacz(p);
	cout << endl;
	cout << endl;
	cout << parz(n);
	cout << endl;
	cout << endl;
	cout << sum();
	cout << endl;
	cout << endl;
	potegowanie();
	cout << endl;
	cout << endl;
	pierwsze(5);
}
