#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador{
  private:
    float porhora;
  public:
    void setPorhora(float ph);
    float getPorhora();

    float CalcularPagamento();
};

#endif // TRABALHADORASSALARIADO_H
