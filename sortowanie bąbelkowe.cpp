#include <iostream>

using namespace std;

void bubbleSort(int tab[], int n) {
    int temp;

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (tab[j - 1] > tab[j]) {
                temp = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Wprowadź liczbę elementów do posortowania: ";
    cin >> n;

    int tab[n];
    cout << "Wprowadź elementy tablicy: ";
    for (int i = 0; i < n; ++i)
        cin >> tab[i];

    cout << "\nTablica przed posortowaniem:" << endl;
    for (int i = 0; i < n; ++i)
        cout << tab[i] << " ";
    cout << endl;

    cout << "\nRozpoczęcie sortowania" << endl;
    bubbleSort(tab, n);

    cout << "\nTablica po sortowaniu:" << endl;
    for (int i = 0; i < n; ++i)
        cout << tab[i] << " ";
    cout << endl;

    return 0;
}
