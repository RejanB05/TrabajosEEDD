#include <iostream>
int main(int argc, char** argv)
{
	int x, y, z;
	
	std::cout <<"Escriba el primer numero: ";
	std::cin >> x;
	std::cout <<"Escriba el segundo numero: ";
	std::cin >> y;
	z=x+y;
	std::cout<<"La suma "<<x<<" mas "<<y<<" es igual a "<<z<<"."<<std::endl;
	return 0;
	
	}