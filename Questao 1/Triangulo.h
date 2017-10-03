#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include <iostream>

class Triangulo: public FiguraGeometrica{
  private:
    int bt; // base
    int at; // altura
  public:
    void setBt(int b);
    int getBt();

    void setAt(int a);
    int getAt();

    float calcularArea();
};

#endif // TRIANGULO_H
