#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main(){
  int b, a, v, w;
  string opcao;
  Quadrado q;
  Triangulo t;
  Circulo c;

  cout << "Digite o nome da figura que deseja calcular a area: ";
  cin >> opcao;

  cout << endl;

  if(opcao == "Quadrado" || opcao == "quadrado"){
      q.setNome(opcao);
      cout << "Digite o valor de L: " << endl;
      cin >> w;

      q.setLq(w);

      q.calcularArea();
  }

  if(opcao == "triangulo" || opcao == "Triangulo"){
      t.setNome(opcao);
      cout << "Digite o valor da base: " << endl;
      cin >> b;

      t.setBt(b);

      cout << endl;

      cout << "Digite o valor da altura: " << endl;
      cin >> a;

      t.setAt(a);

      cout << endl;

      t.calcularArea();
  }

  if(opcao == "Circulo" || opcao == "circulo"){
      c.setNome(opcao);

      cout << "Digite o valor do raio: ";
      cin >> v;

      cout << endl;

      c.setRaio(v);

      c.calcularArea();
    }

  return 0;
}
