#include "ClaseNodoPila.hpp"

ClaseNodoPila::ClaseNodoPila(int v, ClaseNodoPila* sig)
{
	valor =v;
	siguiente = sig;
}

ClaseNodoPila::~ClaseNodoPila()
{
}