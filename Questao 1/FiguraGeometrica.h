#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>


class FiguraGeometrica{
	private:
		std::string nome;
	public:
		FiguraGeometrica(std::string nome);
		float calcularArea();		
};


#endif // FIGURAGEOMETRICA_H
