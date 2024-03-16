#include <iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
using namespace std;
int main() {
    const int max = 100;
    int numero[max];
    int num, count = 0;

    cout << "Ingrese los numeros enteros, escriba -1 para finalizar:\n";

    while (true) {
        cin >> num;
        if (num == -1 || count >= max)
            break;
        numero[count++] = num;
    }

    insertionSort(numero, count);

    cout << "\nNumeros ordenados de menor a mayor:\n";
    for (int i = 0; i < count; ++i) {
        cout << numero[i] << " ";
    }
    cout << endl;

    return 0;
}
