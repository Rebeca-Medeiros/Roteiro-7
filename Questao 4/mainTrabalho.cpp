#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>

using namespace std;

int main() {
  string n;
  int j, opcao;
  float s;

  TrabalhadorPorHora tph;
  TrabalhadorAssalariado ta;

  cout << "     Pagamento de salários   " << endl;
  cout << "Escolha o seu tipo: " << endl;

  cout << "1 - Trabalhador por hora" << endl;
  cout << "2 - Trabalhador assalariado" << endl;
  cin >> opcao;

  switch (opcao) {
    case 1:
      cout << "Nome: ";
      cin >> n;
      tph.setNome(n);

      cout << endl;

      cout << "Horas trabalhadas: ";
      cin >> j;
      tph.setHoras(j);

      cout << endl;

      cout << "Pagamento por hora: ";
      cin >> s;
      tph.setPorhora(s);

      cout << endl;

      tph.CalcularPagamento(tph.getHoras());
      break;
    case 2:
      cout << "Nome: ";
      cin >> n;
      ta.setNome(n);

      cout << endl;

      cout << "Pagamento por hora: ";
      cin >> s;
      ta.setPorhora(s);

      cout << endl;

      ta.CalcularPagamento();
      break;
    default:
      cout << "Opcao invalida" << endl;
      break;
  }

  return 0;
}
