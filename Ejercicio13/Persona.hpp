class Persona
{

public:
	Persona(int edad);
	~Persona();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
		
private:
	boll genero;
	int edad;
	char[10] dni;
}