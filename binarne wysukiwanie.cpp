#include <iostream>
using namespace std;

long long tab[1000000]; // tablica z posortowanymi elementami

// Funkcja do wyszukiwania elementu w tablicy
int szukaj(int l, int p, long szukana) {
  int sr;
  while (l <= p) {
    sr = (l + p) / 2;

    cout << "l = " << l << ", p = " << p << ", sr = " << sr
         << endl; // Wyświetlanie aktualnych indeksów

    if (tab[sr] == szukana) {
      cout << "Znaleziono " << szukana << " na pozycji " << sr << endl;
      return sr;
    }

    if (tab[sr] > szukana) {
      cout << "Szukana liczba jest mniejsza od elementu na pozycji " << sr
           << endl;
      p = sr - 1;
    } else {
      cout << "Szukana liczba jest większa od elementu na pozycji " << sr
           << endl;
      l = sr + 1;
    }
  }
  cout << "Liczba " << szukana << " nie występuje w zbiorze" << endl;
  return -1;
}

int main() {
  long long n, szukana;

  // Prośba o wprowadzenie liczby elementów
  cout << "Podaj ilość elementów do wczytania (n < 1000000): ";
  cin >> n;

  // Prośba o wprowadzenie elementów tablicy
  cout << "Wprowadź " << n << " elementów tablicy (posortowanych): ";
  for (int i = 0; i < n; i++)
    cin >> tab[i];

  // Prośba o wprowadzenie szukanej liczby
  cout << "Podaj liczbę do znalezienia: ";
  cin >> szukana;

  // Wywołanie funkcji szukaj i wyświetlenie wyniku
  int pozycja = szukaj(0, n - 1, szukana);

  return 0;
}
