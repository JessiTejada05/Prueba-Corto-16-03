#include <iostream>

using namespace std;
int main() {

    int numero[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(numero) / sizeof(numero[0]);


    int obj;
    cout << "Ingrese un numero para buscar en el vector: ";
    cin >> obj;

    int posicion = -1;
    for (int i = 0; i < tamano; ++i) {
        if (numero[i] == obj) {
            posicion = i;
            break;
        }
    }

    if (posicion != -1) {
        cout << "El numero " << obj << " esta presente en el vector en la posicion " << posicion << ".\n";
    } else {
        cout << "El numero " << obj << " no esta presente en el vector.\n";
    }

    return 0;
}
