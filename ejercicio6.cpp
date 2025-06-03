#include <iostream>
using namespace std;

bool Primo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int n;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;

    if (Primo(n)) {
        cout << n << " es primo." << endl;
    } else {
        cout << n << " no es primo." << endl;
    }

    return 0;
}
