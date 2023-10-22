#include <iostream>
using namespace std;
int f2(int a, int n) {
    int w=1;                            // K1: początkowa wartość zmiennej przechowującej wynik
    while (n>0){                        // K2: dopóki n > 0
        if (n%2==1){                    // K3: jeżeli n modulo 2 = 1
            w *= a;                     // K3: w ← w * a
        }
        a *= a;                         // K4: a ← a * a
        n /= 2;                         // K5: n ← n / 2
    }
    return w;                           // K6: zwróć w
}
int main() {
    int a, n;
    cout<<"Podaj podstawe:";
    cin>>a;
    cout<<"Podaj wykladnik:";
    cin>>n;
    int result=f2(a, n);
    cout<<a<<" do potegi "<<n<<" wynosi: "<<result<<endl;
    return 0;
}
