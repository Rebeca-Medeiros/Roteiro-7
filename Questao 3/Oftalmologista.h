#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"
#include <iostream>

class Oftalmologista: public Medico{
  private:
    std::string especialiazacao;
  public:
    void setEspecializacao(std::string e);
    std::string getEspecializacao();

    std::string RealizarConsulta();
};

#endif // OFTALMOLOGISTA_H
