#include <iostream>
#include <string>
#include <cstdlib> // para rand()
#include <ctime>   // para time()
#include <set>

class Persona {
private:
    bool genero;           // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

    // Función auxiliar para generar un DNI aleatorio
    void generarDNI() {
        const char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for (int i = 0; i < 8; i++) {
            dni[i] = '0' + rand() % 10; // Números del 0 al 9
        }
        dni[8] = letras[rand() % 26]; // Letra aleatoria
        dni[9] = '\0'; // Fin de cadena
    }

public:
    // Constructor que recibe la edad y genera el DNI y género aleatoriamente
    Persona(int edad) : edad(edad) {
        generarDNI();
        genero = rand() % 2; // 1 = Mujer, 0 = Hombre
    }

    // Destructor
    ~Persona() {}

    // Devuelve la edad de la persona
    int getEdad() const {
        return edad;
    }

    // Devuelve si la persona es mujer
    bool esMujer() const {
        return genero;
    }

    // Establece la edad de la persona
    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    // Muestra la información de la persona
    void mostrar() const {
        std::cout << "DNI: " << dni << "\n";
        std::cout << "Género: " << (genero ? "Mujer" : "Hombre") << "\n";
        std::cout << "Edad: " << edad << "\n";
    }
};

int main() {
    srand(static_cast<unsigned>(time(0))); // Inicializa el generador de números aleatorios

    std::set<int> edadesUnicas; // Para asegurar que no se repitan edades

    Persona* personas[10]; // Array de punteros a 10 objetos Persona

    // Crear 10 personas con edades únicas entre 18 y 27
    for (int i = 0; i < 10; i++) {
        int edad;
        do {
            edad = 18 + rand() % 10; // Genera una edad entre 18 y 27
        } while (edadesUnicas.find(edad) != edadesUnicas.end()); // Repite si ya existe la edad

        edadesUnicas.insert(edad); // Añade la edad al set de edades únicas

        personas[i] = new Persona(edad); // Crea una nueva persona con la edad generada
    }

    // Mostrar la información de cada persona
    for (int i = 0; i < 10; i++) {
        std::cout << "Persona " << i + 1 << ":\n";
        personas[i]->mostrar();
        std::cout << "---------------------------\n";
    }

    // Liberar la memoria asignada
    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }
		return 0;
}