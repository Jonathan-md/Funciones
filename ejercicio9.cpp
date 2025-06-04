#include <iostream>
using namespace std;

int potencia(int base, int expo) {
    int result = 1;
    for (int i = 1; i <= expo; i++) {
        result *= base;
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

float rSuma(int n) {
    float suma = 0;

    for (int i = 1; i <= n; i++) {
        float numerd = potencia(i, i);    
        float denom = 2 * i;          
        suma += numerd / denom;   
    }

    return suma;
}


int main() {
    int n;

    cout << "Ingresa el valor de n: ";
    cin >> n;

    float result = rSuma(n);

    cout << "La suma S es: " << result << endl;

    return 0;
}