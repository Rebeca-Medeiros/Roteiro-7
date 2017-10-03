#include "Cirurgiao.h"
#include <iostream>

using namespace std;

void Cirurgiao::setEspecializacao(string e){
  especialiazacao = e;
}

string Cirurgiao::getEspecializacao(){
  return especialiazacao;
}

string Cirurgiao::RealizarCirurgia(){
  string Encerrada = "Cirurgia encerrada"; 

  cout << "Faz cirurgias" << endl;

  return Encerrada;
}
