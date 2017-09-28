#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

void FiguraGeometrica::setNome(string n){
  nome = n;
}

string FiguraGeometrica::getNome(){
  return nome;
}

float FiguraGeometrica::calcularArea(){}
