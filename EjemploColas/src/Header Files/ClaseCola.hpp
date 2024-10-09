#include "ClaseNodoCola.hpp"
class ClaseCola
{
public:
	ClaseCola();
	~ClaseCola();

	void insertar(int v);
	int eliminar();
	void mostrar();
	int verPrimero();
	
private:
	pnodoCola primero, ultimo;
	int longitud;
};


