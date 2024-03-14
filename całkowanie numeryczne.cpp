#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return x * x; // funkcja kwadratowa x^2
}

double trapezoidal_integration(double a, double b, int n)
{
    double x = (b - a) / n; // Krok
    double S = 0; // Suma pól trapezów
    double srodek = a + (b - a) / (2.0 * n); // Środek pierwszego boku

    for (int i = 0; i <= n; ++i)
    {
        S += f(srodek); // Obliczenie wysokości prostokąta
        srodek += x; // Przejście do następnego środka
    }

    return S * x;
}

int main()
{
    double a = 0; // Początek przedziału
    double b = 1; // Koniec przedziału
    int n = 1000; // Liczba prostokątów

    double result = trapezoidal_integration(a, b, n);
    cout << "Wynik całkowania: " << result << endl;

    return 0;
}
