#include <iostream>
#include <vector>
#include <string>
using namespace std;

double spalanie(int a, int b)
{
    int x = a*b/100;
    cout << "przebyte km = " << a << endl;
    cout << "spalanie na 100km = " << b << "(litrow)" << endl;
    cout << "zuzycie paliwa = ";
    return x;
}

int suma(int n)
{
    int a = 0;
    int b = 0;
    cout << "n = "<< n << endl << "Liczby => ";
    for (int i = 1; i <= n; i++)
    {
        a += 6;
        b += a;
        cout << a << ",";
    }
    cout << endl << "Suma = ";
    return b;
}

int pot(int n)
{
    int x = 2;
    for (int i = 1; i < n; i++)
    {
        x *= 2;
    }
    cout << "2 do potegi " << n << " to ";
    return x;
}

bool pal(int p)
{
    int orginal = p;
    int x = 0;
    int palimdrom = 0;
    while (p!=0) 
    {
        x = p % 10;
        p = p / 10;
        palimdrom = palimdrom * 10 + x;
    }
    if (orginal == palimdrom)
    {
        return true;
    }
    else {
        return false;
    }
}

void piramida(int w)
{
    int x = 2;
    for (int i = 1; i <= w; i++)
    {
        int a = x;
        for (int j = 0; j < i; j++)
        {
            cout << a << ",";
            a += a;
        }
        cout << endl;
        x *= 2;
    }
}

int main()
{
    cout << spalanie(150, 8);
    cout << endl << endl;
    cout << suma(4);
    cout << endl << endl;
    cout << pot(3);
    cout << endl << endl;
    if (pal(8008)==1)
    {
        cout << "Liczba jest palindromem";
    }
    else
    {
        cout << "Liczba nie jest palindromem";
    }
    cout << endl << endl;
    piramida(5);
} 