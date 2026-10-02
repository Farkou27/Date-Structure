#include <iostream>
using namespace std;

void mostrarInverso(int *arr, int n) 
{
    cout << "\nDatos del ultimo al primero con sus direcciones de memoria:\n";
    for (int i = n - 1; i >= 0; i--) 
    {
        cout << "Valor: " << *(arr + i) << " | Direccion: " << &arr[i] << endl;
    }
}

int main() 
{
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arreglo[n]; 
    cout << "Ingrese los " << n << " valores enteros:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arreglo[i];
    }

    mostrarInverso(arreglo, n);
    return 0;
}
