#include <iostream>
using namespace std;

enum Operacao {
  soma,
  subtracao,
  multiplicacao,
  divisao
};

class Tabuada2 {
  private:
    int numero;
    Operacao operacao;

  public:
    Tabuada2(int num = 1, Operacao op = soma) {}
    
    int getTabuada() {
      return this->numero;
    }
    void setTabuada(int num) {
      this-> numero = num;
    }
    void setOperacao(Operacao op) {
      this->operacao = op;
      }
    void imprimirTabuada() {
      switch (operacao)
      {
      case soma:
        imprimirTabuadaAdicao();
        break;
      case subtracao:
        imprimirTabuadaSubtracao();
        break;
      case multiplicacao:
        imprimirTabuadaMultiplicacao();
        break;
      case divisao:
        imprimirTabuadaDivisao();
        break;
      default:
        break;
      }
    }
  private: 

    void imprimirTabuadaAdicao() {
      cout<< "A tabuada da adicão de " << this->numero << " eh: " << endl;
      for (int i = 1; i <= 10; i++) {
        cout<< this->numero << " + " << i << " = " <<(this->numero + i) << endl;
      }
    }

  void imprimirTabuadaSubtracao() {
      cout<< "A tabuada da subtracão de " << this->numero << " eh: " << endl;
      for (int i = 1; i <= 10; i++) {
        cout << this->numero << " - " << i << " = " <<(this->numero - i) << endl;
      }
    }

    void imprimirTabuadaMultiplicacao() {
      cout<< "A tabuada da multiplicacão de " << this->numero << " eh: " << endl;
      for (int i = 1; i <= 10; i++) {
        cout<< this->numero << " * " << i << " = " <<(this->numero * i) << endl;
      }
    }

    void imprimirTabuadaDivisao() {
      cout<< "A tabuada da divisão de " << this->numero << " eh: " << endl;
      if (this->numero == 0) {
        cout<< "Não é possível a divisão por zero!" << endl;
      } else {
          for (int i = 1; i <= 10; i++) {
            cout<< this->numero << " / " << i << " = " <<(this->numero / i) << endl;
          }
      }
    }
  }; 

int main() {
  Tabuada2* tabuada1 = new Tabuada2;
  tabuada1->setTabuada(2);
  tabuada1->setOperacao(soma);
  cout<< "O numero atual eh: " << tabuada1->getTabuada() << endl;
  cout<< endl;
  tabuada1->imprimirTabuada();
  cout<<endl;

  Tabuada2* tabuada2 = new Tabuada2;
  tabuada2->setTabuada(3);
  tabuada2->setOperacao(subtracao);
  cout<< "O numero atual eh: " << tabuada2->getTabuada() << endl;
  cout<< endl;
  tabuada2->imprimirTabuada();
  cout<<endl;

  Tabuada2* tabuada3 = new Tabuada2;
  tabuada3->setTabuada(5);
  tabuada3->setOperacao(multiplicacao);
  cout<< "O numero atual eh: " << tabuada3->getTabuada() << endl;
  cout<< endl;
  tabuada3->imprimirTabuada();
  cout<<endl;

  Tabuada2* tabuada4 = new Tabuada2;
  tabuada4->setTabuada(0);
  tabuada4->setOperacao(divisao);
  cout<< endl;
  cout<< "O numero atual eh: " << tabuada4->getTabuada() << endl;
  cout<<endl;
  tabuada4->imprimirTabuada();
  cout<<endl;

  return 0;
}