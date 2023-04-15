#include <iostream>
using namespace std;

class myClass 
{
  private:
    int x;
  public:
    void setValor(int v) {
      x = v;
    }
    void mostraValor() {
      cout << "O valor eh: " << x << endl;
    }
  
};

int main() {
  myClass obj1, obj2;
  obj1.setValor(1);
  obj2.setValor(2);
  obj1.mostraValor();
  obj2.mostraValor();

  cout << endl;

  return 0;
}