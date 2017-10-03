#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"
#include <iostream>

class Quadrado: public FiguraGeometrica{
  private:
    int lq; // lado
  public:
    void setLq(int c);
    int getLq();

    float calcularArea(int lq);
};

#endif // QUADRADO_H
