#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int cuantos;
    cout << "Cuantos datos va a introducir?";
    cin >> cuantos;
    if(cuantos <= 0)
        cout << "La cantidad no es valida\n";
    else {
        double suma = 0, dato, media = 0;
        int i = 0;
        while(i < cuantos) {
            cout << "Introduzca el dato " << (i + 1) << ": ";
            cin >> dato;
            suma += dato;
            i++;
        }
        media = suma / cuantos;
        cout << "La media de los " << cuantos << " datos es " << media << ".\n";
    }
    return 0; 
}