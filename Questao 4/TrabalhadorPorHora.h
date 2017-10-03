#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador{
  private:
    float porhora;
    int horas;
  public:
    void setHoras(int h);
    int getHoras();

    void setPorhora(float ph);
    float getPorhora();

    float CalcularPagamento(int h);
};

#endif // TRABALHADORPORHORA_H
