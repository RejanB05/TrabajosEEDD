#include "ClaseCola.hpp"

ClaseCola::ClaseCola()
{
	primero = NULL;
	ultimo = NULL;
	longitud = 0;
}

void ClaseCola::insertar(int v)
{
	pnodoCola nuevo;
	nuevo = new NodoCola(v);
	if(ultimo)
		ultimo->siguiente = nuevo;
	
	ultimo = nuevo;
	
	if(!primero)
		primero = nuevo;
	longitud++;
}

void ClaseCola::mostrar()
{
	pnodoCola aux = primero;
	cout << "\tEl contenido de la cola es: ";
	while(aux) {
		cout << "-> " << aux->valor;
		aux = aux->siguiente;
	}
	cout << endl;
}

int ClaseCola::eliminar()
{
	pnodoCola nodo;
	int v;
	nodo = primero;
	if(!nodo)
		return 0;
	primero = nodo->siguiente;
	v = nodo->valor;
	delete nodo;
	if(!primero)
		ultimo = NULL;
	longitud--;
	return v;
}

int ClaseCola::verPrimero(){
	return primero->valor;
}
ClaseCola::~ClaseCola()
{
	while(primero)
		eliminar();
}

