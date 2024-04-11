#include <iostream>

int main() {
    int n;
    std::cout << "Ile wyrazow ciagu wypisac: ";
    std::cin >> n;

    int f0 = 0;
    int f1 = 1;
    int f;

    std::cout << f0 << std::endl; // Wypisanie pierwszego wyrazu ciągu

    if (n >= 2) {
        std::cout << f1 << std::endl; // Wypisanie drugiego wyrazu ciągu
    }

    for (int i = 2; i < n; ++i) {
        f = f0 + f1; // Obliczanie kolejnego wyrazu ciągu
        std::cout << f << std::endl; // Wypisanie kolejnego wyrazu ciągu
        f0 = f1;
        f1 = f;
    }

    return 0;
}
