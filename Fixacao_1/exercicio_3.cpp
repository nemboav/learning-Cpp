#include <iostream>
using namespace std;

class Numero 
{
  private:
    int num;
  public:

    void setNumero(int n) //define o numero
    {
      this->num = num;
    }
    void get() //obtem o numero do usuario
    {
      cout<<"Digite um número: "<< endl;
      cin>> num;
    }
    void mostraNumero()
    {
      cout<< num << endl;
    }
};

int main() {
  Numero num1;
  num1.setNumero(10);
  num1.get();
  cout<< "O valor do numero 1 eh: "; num1.mostraNumero();
  cout<< endl;

return 0;
}
    
