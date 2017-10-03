#include "Medico.h"
#include <iostream>

using namespace std;

void Medico::setNome(string n){
  nome = n;
}

string Medico::getNome(){
  return nome;
}

void Medico::setAltura(float a){
  altura = a;
}

float Medico::getAltura(){
  return altura;
}

void Medico::setPeso(float p){
  peso = p;
}

float Medico::getPeso(){
  return peso;
}
