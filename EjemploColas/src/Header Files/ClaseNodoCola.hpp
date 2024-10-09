#include <iostream>
using namespace std;

class ClaseNodoCola
{
public:
	ClaseNodoCola(int v, ClaseNodoCola* sig = NULL);
	~ClaseNodoCola();
	
private:
	int valor;
	ClaseNodoCola* siguiente;
	
	friend class Cola;
}

typedef ClaseNodoCola* pnodoCola;