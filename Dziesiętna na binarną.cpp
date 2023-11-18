#include <iostream>

using namespace std;

void konwertujNaBinarna(int liczba) {
    int tab[31];
    int i = 0;

    // Konwersja na binarną
    while (liczba != 0) {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }

    // Wyświetlenie wyniku
    cout << "Liczba po zamianie na postac binarna: ";
    for (int j = i - 1; j >= 0; --j) {
        cout << tab[j];
    }
    cout << endl;
}

int main() {
    int liczba;

    // Wczytanie liczby dziesiętnej od użytkownika
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;

    // Wywołanie funkcji konwersji
    konwertujNaBinarna(liczba);

    return 0;
}
