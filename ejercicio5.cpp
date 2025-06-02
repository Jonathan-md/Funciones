#include <iostream>
using namespace std;

int obtenerSumaDivisoresPropios(int numero) {
    int suma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int sonNumerosAmigos(int num1, int num2) {
    int suma1 = obtenerSumaDivisoresPropios(num1);
    int suma2 = obtenerSumaDivisoresPropios(num2);

    if (suma1 == num2 && suma2 == num1) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (sonNumerosAmigos(numero1, numero2)) {
        cout << numero1 << " y " << numero2 << " son numeros amigos." << endl;
    } else {
        cout << numero1 << " y " << numero2 << " no son numeros amigos." << endl;
    }

    return 0;
}

