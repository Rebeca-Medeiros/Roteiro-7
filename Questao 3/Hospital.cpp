#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Ginecologista.h"
#include "Otorrino.h"
#include <iostream>

using namespace std;

int main(){
  int opcao;
  float h, m;
  string name, esp;

  Cirurgiao c;
  Otorrino ot;
  Oftalmologista of;
  Ginecologista g;

  cout << "         Bem vindo ao hospital!        ";
  cout << endl;
  cout << "Com qual medico voce deseja se consultar?";
  cout << endl;

  cout << "1 - Cirugiao" << endl;
  cout << "2 - Oftalmologista" << endl;
  cout << "3 - Ginecologista" << endl;
  cout << "4 - Otorrino" << endl;
  cin >> opcao;

  cout << endl;

  switch (opcao) {
    case 1:
      cout << "Nome: " << endl;
      cin >> name;
      c.setNome(name);

      cout << "Altura: " << endl;
      cin >> h;
      c.setAltura(h);

      cout << "Peso: " << endl;
      cin >> m;
      c.setPeso(m);

      cout << "Especialzacao: " << endl;
      cin >> esp;
      c.setEspecializacao(esp);

      c.RealizarCirurgia();

      break;
    case 2:
      cout << "Nome: " << endl;
      cin >> name;
      of.setNome(name);

      cout << "Altura: " << endl;
      cin >> h;
      of.setAltura(h);

      cout << "Peso: " << endl;
      cin >> m;
      of.setPeso(m);

      cout << "Especialzacao: " << endl;
      cin >> esp;
      of.setEspecializacao(esp);

      of.RealizarConsulta();

      break;
    case 3:
      cout << "Nome: " << endl;
      cin >> name;
      g.setNome(name);

      cout << "Altura: " << endl;
      cin >> h;
      g.setAltura(h);

      cout << "Peso: " << endl;
      cin >> m;
      g.setPeso(m);

      cout << "Especialzacao: " << endl;
      cin >> esp;
      g.setEspecializacao(esp);

      g.RealizarConsulta();

      break;
    case 4:
      cout << "Nome: " << endl;
      cin >> name;
      ot.setNome(name);

      cout << "Altura: " << endl;
      cin >> h;
      ot.setAltura(h);

      cout << "Peso: " << endl;
      cin >> m;
      ot.setPeso(m);

      cout << "Especialzacao: " << endl;
      cin >> esp;
      ot.setEspecializacao(esp);

      ot.RealizarConsulta();

      break;
    default:
      cout << "Escolha incorreta" << endl;
      break;
  }

  return 0;
}
