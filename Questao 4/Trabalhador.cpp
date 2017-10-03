#include "Trabalhador.h"
#include <iostream>

using namespace std;

void Trabalhador::setNome(string n){
  nome = n;
}

string Trabalhador::getNome(){
  return nome;
}

void Trabalhador::setSalariomensal(float sm){
  salariomensal = sm;
}

float Trabalhador::getSalariomensal(){
  return salariomensal;
}
