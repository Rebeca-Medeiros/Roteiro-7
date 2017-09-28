#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>


class FiguraGeometrica{
  private:
    std::string nome;
  public:
    //FiguraGeometrica();
    void setNome(std::string n);
    std::string getNome();

    virtual float calcularArea();
};

#endif // FIGURAGEOMETRICA_H
