#include "TrabalhadorAssalariado.h"
#include <iostream>

using namespace std;

void TrabalhadorAssalariado::setPorhora(float ph){
  porhora = ph;
}

float TrabalhadorAssalariado::getPorhora(){
  return porhora;
}

float TrabalhadorAssalariado::CalcularPagamento(){
  float pagamento;

  cout << "Independente do numero de horas trabalhadas o pagamento é realizado considerando uma carga horário de 40 horas";
  cout << endl;
  
  pagamento = (porhora + (porhora/2)) * 40;

  setSalariomensal(pagamento * 4);

  cout << "O salariomensal e de R$" << getSalariomensal() << endl;

  return 1;
}
