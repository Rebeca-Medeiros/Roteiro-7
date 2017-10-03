#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"
#include <iostream>

class Otorrino: public Medico{
  private:
    std::string especialiazacao;
  public:
    void setEspecializacao(std::string e);
    std::string getEspecializacao();

    std::string RealizarConsulta();
};
#endif // OTORRINO_H
