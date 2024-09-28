#include <iostream>
using namespace std;

int cuadrado(int x) {
    return x * x;
}

void cuadrado(char c) {
    cout << c << c << c << endl;
    cout << c << " " << c << endl;
    cout << c << c << c << endl;
}

int main(int argc, char** argv) {
    cout << "Usamos la función para elevar al cuadrado" << endl;
    cout << cuadrado(12) << endl;
    cout << "Ahora la usamos para pintar un caracter formando un cuadrado" << endl;
    cuadrado('*');
    return 0;
}