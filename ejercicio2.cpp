#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> num1 >> num2;

    int mayor, menor;

    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }

    int cociente = 0;
    while (mayor >= menor) {
        mayor -= menor;
        cociente++;
    }

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << mayor << endl;

    return 0;
}