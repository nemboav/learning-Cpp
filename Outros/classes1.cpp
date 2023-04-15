  #include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int, int);
    int area() {
      return width * height;
    }
};

void Rectangle :: set_values(int x, int y) {
  width = x;
  height = y;
}

int main() {
  Rectangle recta;
  recta.set_values(5, 5);
  cout << "A area do retangulo eh: " << recta.area() << endl;
  return 0;
}