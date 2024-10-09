#include <iostream>
using namespace std;

class ClaseNodoPila
{
public:
    ClaseNodoPila(int v, ClaseNodoPila* sig = NULL);
    ~ClaseNodoPila();

private:
    int valor;
    ClaseNodoPila* siguiente;
    friend class Pila;
};

typedef ClaseNodoPila* pnodoPila;