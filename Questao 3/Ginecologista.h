#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include <iostream>
#include "Medico.h"

class Ginecologista: public Medico{
  private:
    std::string especialiazacao;
  public:
    void setEspecializacao(std::string e);
    std::string getEspecializacao();

    std::string RealizarConsulta();
};

#endif // GINECOLOGISTA_H
