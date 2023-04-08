#include <iostream>
#include <string>

int main() {
  int a, b;

  std::string nome = "Maria";

  std::cout << nome <<std::endl;

  std::cout << "Digite um numero: " << std::endl;
  std::cin >> a;

  std::cin.ignore();

  std::string name;

  std::cout << "Digite um nome: " << std::endl;
  std::getline(std::cin, name);

  std::cout << "Digite um outro numero: " << std::endl;
  std::cin >> b;

  std::cout << a << "\n" << b << std::endl;
  std::cout << nome << std::endl;


  

  return 0;
}