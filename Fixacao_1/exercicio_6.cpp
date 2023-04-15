#include <iostream>
using namespace std;

class Tabuada1
{
  private:
    int numero;
  public:
  Tabuada1(int num) {
    this->numero = num;
  }
  int getNumero() {
    return this->numero;
  }
  void setNumero(int num) {
    this-> numero = num;
  }
  void imprimirTabuadaAdicao() {
    cout<< "A tabuada da adicão de " << this->numero << " eh: " << endl;
    for (int i = 1; i <= 10; i++) {
      cout<< this->numero << "+" << i << "=" <<(this->numero + i) << endl;
    }
  }

 void imprimirTabuadaSubtracao() {
    cout<< "A tabuada da subtracão de " << this->numero << " eh: " << endl;
    for (int i = 1; i <= 10; i++) {
      cout<< this->numero << "-" << i << "=" <<(this->numero - i) << endl;
    }
  }

  void imprimirTabuadaMultiplicacao() {
    cout<< "A tabuada da multiplicacão de " << this->numero << " eh: " << endl;
    for (int i = 1; i <= 10; i++) {
      cout<< this->numero << "*" << i << "=" <<(this->numero * i) << endl;
    }
  }

  void imprimirTabuadaDivisao() {
    cout<< "A tabuada da divisão de " << this->numero << " eh: " << endl;
    if (this->numero == 0) {
      cout<< "Não é possível a divisão por zero!" << endl;
    } else {
        for (int i = 1; i <= 10; i++) {
          cout<< this->numero << "/" << i << "=" <<(this->numero / i) << endl;
        }
    }
  }
};

int main() {
  Tabuada1* n1 = new Tabuada1(2);
  cout<< "Numero inicial eh: " << n1->getNumero() << endl;
  cout<< endl;
  n1->setNumero(5);
  cout << "Numero atual eh: " << n1->getNumero() << endl;
  cout<< endl;

  n1->imprimirTabuadaAdicao();
  cout<< endl;
  n1->imprimirTabuadaDivisao();
  cout<< endl;
  n1->imprimirTabuadaMultiplicacao();
  cout<< endl;
  n1->imprimirTabuadaSubtracao();

  delete n1;
  
  return 0;
}