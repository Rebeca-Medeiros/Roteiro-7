#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <iostream>

class Cirurgiao: public Medico{
  private:
    std::string especialiazacao;
  public:
    void setEspecializacao(std::string e);
    std::string getEspecializacao();

    std::string RealizarCirurgia();
};

#endif // CIRURGIAO_H
