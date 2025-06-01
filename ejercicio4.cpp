#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresae un numero: ";
    cin >> numero;

    int suma = 0;

    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    if (suma == numero) {
        cout << numero << " es un numero perfecto." << endl;
    } else {
        cout << numero << " no es un numero perfecto." << endl;
    }

    return 0;
}