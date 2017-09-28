#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include <iostream>

class Circulo: public FiguraGeometrica{
  private:
    int raio; // raio do circulo, valor de pi é 3.14
  public:
    //Circulo();
    void setNome(std::string n);
    std::string getNome();

    void setRaio(int r);
    int getRaio();

    float calcularArea(int raio);
};

#endif //CIRCULO_H
