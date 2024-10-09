#include "ClaseNodoCola.hpp"

ClaseNodoCola::ClaseNodoCola(int v, ClaseNodoCola* sig)
{
	valor = v;
	siguiente = sig;
}

ClaseNodoCola::~ClaseNodoCola()
{
}

