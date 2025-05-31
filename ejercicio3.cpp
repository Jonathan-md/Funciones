#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "¿Cuántos términos de la serie de Fibonacci deseas generar? ";
    cin >> n;

    int a, b, suma, siguiente;
    
    a = 0;
    b = 1;
    suma = 0;

    cout << "Serie de Fibonacci: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        suma += a;

        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << "\nSuma de los términos: " << suma << endl;

    return 0;
}	
