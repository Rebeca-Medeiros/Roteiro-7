#include "Triangulo.h"
#include <iostream>

using namespace std;

void Triangulo::setBt(int b){
  bt = b;
}

int Triangulo::getBt(){
  return bt;
}

void Triangulo::setAt(int a){
  at = a;
}

int Triangulo::getAt(){
  return at;
}

float Triangulo::calcularArea(){
  float areaT;

  areaT = (bt * at)/2;

  cout << "A area do triangulo e: " << areaT;
  cout << endl;
  return areaT;
}
