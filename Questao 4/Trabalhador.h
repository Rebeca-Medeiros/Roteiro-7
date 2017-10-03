#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

class Trabalhador{
  private:
    std::string nome;
    float salariomensal;
  public:
    void setNome(std::string n);
    std::string getNome();

    void setSalariomensal(float sm);
    float getSalariomensal();
};

#endif // TRABALHADOR_H
