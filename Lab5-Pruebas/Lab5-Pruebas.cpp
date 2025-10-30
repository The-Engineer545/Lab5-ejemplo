#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"

int main()
{

    Shape* soyUnaFigura = new Square(2.0);
    Shape* soyOtraFigura = new Square(2.0);

    double resultadoCuadro = soyUnaFigura->calculateArea();
    double resultadoCirculo = soyOtraFigura->calculateArea();

    std::cout << "Hola, el lado de un cuadrado de base 2, es:\n";
	std::cout << resultadoCuadro << std::endl;

    std::cout << "Hola, el lado de un circulo de radio 2, es:\n";
    std::cout << resultadoCirculo << std::endl;
}
