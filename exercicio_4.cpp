#include <iostream>
using namespace std;

class Pessoa 
{
  private:
    int id;
  public:
    Pessoa() {
      this->id = 0;
    }
    Pessoa(int id) {
      this->id = id;
    }
    void setPessoa(int id) {
      this->id = id;
    }
    int getPessoa() {
      return this->id;
    }
};

int main () {
  Pessoa p1;

  cout << "O numero identificador inicial: " << p1.getPessoa() << endl;
  p1.setPessoa(1002);
  cout <<"O numero identificador final: " << p1.getPessoa() << endl;
  

  return 0;
}