#include "FiguraGeometrica.h"
#include "Circulo.h"
#include <iostream>

using namespace std;

void Circulo::setRaio(int r){
  raio = r;
}

int Circulo::getRaio(){
  return raio;
}

float Circulo::calcularArea(int raio){
  float areaC;

  areaC = 3.14 *(raio * raio);

  cout << "A area do Circulo e: " << areaC;
  cout << endl;

  return areaC;
}
