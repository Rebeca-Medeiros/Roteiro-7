#include "Quadrado.h"
#include <iostream>

using namespace std;


void Quadrado::setLq(int c){
  lq = c;
}

int Quadrado::getLq(){
  return lq;
}

float Quadrado::calcularArea(int lq){
  float areaQ;

  areaQ = lq * lq;

  cout << "A area do Quadrado e: " << areaQ;
  cout << endl;

  return areaQ;
}
