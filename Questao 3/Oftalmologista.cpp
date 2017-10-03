#include "Oftalmologista.h"
#include <iostream>

using namespace std;

void Oftalmologista::setEspecializacao(string e){
  especialiazacao = e;
}

string Oftalmologista::getEspecializacao(){
  return especialiazacao;
}

string Oftalmologista::RealizarConsulta(){
  string Encerrada = "Consulta encerrada"; 

  cout << "Realizando consulta" << endl;

  return Encerrada;
}
