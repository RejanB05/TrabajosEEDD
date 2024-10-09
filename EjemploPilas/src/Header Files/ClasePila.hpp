#include "ClaseNodoPila.hpp"

class ClasePila
{
public:
    ClasePila();
    ~ClasePila();
    void insertar(int v);
    int extraer();
    int cima();
    void mostrar();
    int getLongitud();

private:
    pnodoPila ultimo;
    int longitud;
};