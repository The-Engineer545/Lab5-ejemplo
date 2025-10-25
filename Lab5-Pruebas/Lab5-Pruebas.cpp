#include <iostream>
#include "Shape.h"
#include "Square.h"

int main()
{

    Shape* soyUnaFigura = new Square(2.0);

    double resultado = soyUnaFigura->calculateArea();
    std::cout << "Hola, el lado de un cuadrado de base 2, es:\n";
	std::cout << resultado << std::endl;
}
