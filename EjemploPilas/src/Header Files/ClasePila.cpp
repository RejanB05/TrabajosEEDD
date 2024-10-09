#include "ClasePila.hpp"

ClasePila::ClasePila()
{
	ultimo = NULL;
	longitud = 0;
}

void ClasePila::insertar(int v)
{
	pnodoPila nuevo;
	nuevo = new NodoPila(v, ultimo);
	ultimo = nuevo;
	longitud++;
}

int ClasePila::extraer()
{
	pnodoPila nodo;
	int v;
	if(!ultimo)
		return 0;
	nodo = ultimo;
	ultimo = nodo->siguiente;
	v = nodo->valor
	longitud--;
	delete nodo;
	return v;
}

int ClasePila::cima() 
{ 
    pnodoPila nodo; 
    if(!ultimo) 
        return 0; 
    return ultimo->valor; 
}

void ClasePila::mostrar() 
{ 
    pnodoPila aux = ultimo; 
    cout << "\tEl contenido de la pila es: "; 
    while(aux) { 
        cout << "<-" << aux->valor; 
        aux = aux->siguiente; 
    } 
    cout << endl; 
}

int ClasePila::getLongitud() 
{ 
    return this->longitud; 
}

ClasePila::~ClasePila() 
{ 
    pnodoPila aux; 
    while(ultimo) { 
        aux = ultimo; 
        ultimo = ultimo->siguiente; 
        delete aux; 
    } 
}