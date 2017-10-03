#include "TrabalhadorPorHora.h"
#include <iostream>

using namespace std;

void TrabalhadorPorHora::setHoras(int h){
  horas = h;
}

int TrabalhadorPorHora::getHoras(){
  return horas;
}

void TrabalhadorPorHora::setPorhora(float ph){
  porhora = ph;
}

float TrabalhadorPorHora::getPorhora(){
  return porhora;
}

float TrabalhadorPorHora::CalcularPagamento(int h){
  float pagamento;

  if(horas <= 0){
    cout << "Numero de horas invalido" << endl;
  }

  if(horas > 0 && horas <= 40){
    pagamento = porhora * horas;
    cout << "O acrescimo por horas e de R$" << pagamento << endl;
  } else {
    if(horas > 40){
      pagamento = (porhora + (porhora/2)) * horas;
      cout << "O acrescimo por horas e de R$" << pagamento << endl;
    }
  }
  
  setSalariomensal(pagamento * 4);

  cout << "O salariomensal e de R$" << getSalariomensal() << endl;

  return pagamento;
}
