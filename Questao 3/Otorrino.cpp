#include "Otorrino.h"
#include <iostream>

using namespace std;

void Otorrino::setEspecializacao(string e){
  especialiazacao = e;
}

string Otorrino::getEspecializacao(){
  return especialiazacao;
}

string Otorrino::RealizarConsulta(){
  string Encerrada = "Consulta encerrada"; 

  cout << "Realizando consulta" << endl;

  return Encerrada;
}
