#include<iostream>

using namespace std;

float spalanie(float a, float b)
{
	float wynik = ((a / 100) * b);
	return wynik;
}

int main()
{
	float a = 150;
	float b = 8;
	cout << spalanie(a,b);
}
