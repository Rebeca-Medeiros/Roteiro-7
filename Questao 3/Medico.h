#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>

class Medico{
  private:
    std::string nome;
    float altura;
    float peso;
  public:
    void setNome(std::string n);
    std::string getNome();

    void setAltura(float a);
    float getAltura();

    void setPeso(float p);
    float getPeso();
};

#endif // MEDICO_H
