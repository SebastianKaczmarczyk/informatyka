#include <iostream>
using namespace std;
int fibRek(int n) {
    if (n < 3) // K1
        return 1; // K2
    else
        return fibRek(n - 2) + fibRek(n - 1); // K3
}
int main() {
    int n;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> n;
    cout << n << " wyraz ciagu ma wartosc " << fibRek(n) << endl;
    return 0;
}
