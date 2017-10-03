#include "Ginecologista.h"
#include <iostream>

using namespace std;

void Ginecologista::setEspecializacao(string e){
  especialiazacao = e;
}

string Ginecologista::getEspecializacao(){
  return especialiazacao;
}

string Ginecologista::RealizarConsulta(){
  string Encerrada = "Consulta encerrada";

  cout << "Realizando consulta" << endl;

  return Encerrada;
}
