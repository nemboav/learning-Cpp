#include <iostream>

int main() {
  
  float a = 9.9;
  float b = 4;

  std::cout<< a << std::endl;

  a = 10;

  std::cout << a << std::endl;

  a = a / 2;

  std::cout << b << std::endl;

  b += 5;
  std::cout << b << std::endl;

  b -= 10;
  std::cout << b << std::endl;

  b *= 5;
  std::cout << b << std::endl;

  b /= 2;
  std::cout << b << std::endl;

  int c = 8;

  int d = c++;
  std::cout << c << std::endl;

  int e = ++c;
  std::cout << c << std::endl;


  return 0;
}