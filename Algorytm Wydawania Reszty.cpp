#include <iostream>
#include <vector>
using namespace std;

void wydajReszte(int kwota) {
    vector<int> nominaly = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < nominaly.size(); ++i) {
        if (kwota >= nominaly[i]) {
            int ile = kwota / nominaly[i];
            kwota -= nominaly[i] * ile;
            cout << nominaly[i] << " x " << ile << endl;
        }
    }
}

int main() {
    int kwota;
    cout << "Podaj reszte do wyplacenia: ";
    cin >> kwota;
    
    wydajReszte(kwota);
    
    return 0;
}
