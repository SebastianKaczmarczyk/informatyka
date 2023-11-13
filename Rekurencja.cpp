#include <iostream>
using namespace std;
unsigned int silnia(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}
int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n < 0) {
        cout << "Silnia nie jest zdefiniowana dla liczby ujemnej." << std::endl;
    }
    else {
        unsigned int wynik = silnia(n);
        cout << n << "!" <<"=" << wynik << endl;
    }
    return 0;
}
