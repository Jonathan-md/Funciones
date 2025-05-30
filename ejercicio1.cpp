#include <iostream>
using namespace std;

float suma(float a, float b) {
    return a + b;
}

float division(float a, float b) {
    if (b == 0) {
        cout << "No se puede hacer una division con 0";
        return 0; 
    }
    return a / b;
}

int main() {
    float num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El resultado de la suma es: " << suma(num1, num2) << endl;
    cout << "El resultado de la division es: " << division (num1, num2);

    return 0;
}