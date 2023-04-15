#include <iostream>
using namespace std;
#include <string>

class Text 
{
  private:
    string text;
  public:
    Text(string textDef = "Unicamp") {
      this->text = textDef;
    }
    string getText() {
      return this->text;
    }
    void setText(string text) {
      this-> text = text;
    }
};

int main() {
  Text *t1 = new Text(); //aloco dinamicamente
  cout<< "O texto inical digitado eh: " << t1->getText() << endl;
  t1->setText("Hello world!");
  cout<< "O texto final digitado eh: " << t1->getText() << endl;
  delete t1;

  cout << endl;

  Text *t2 = new Text();
  cout<< "O texto inical digitado eh: " << t2->getText() << endl;
  t2->setText("Sistemas de informação");
  cout<< "O texto final digitado eh: " << t2->getText() << endl;
  delete t2;



  return 0;
}