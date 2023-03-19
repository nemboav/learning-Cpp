#include <iostream>

int main ()
{
    //Tipos de inicialização

    int a = 5, A = 6; // Inicialização por cópia
    int b( 7 ), B( 8 ); // Inicialização direta
    int c{ 9 }, C{ 10 }; // Inicialização uniforme

    std::cout << a << std::endl;
    std::cout << A << std::endl;
    std::cout << b << std::endl;
    std::cout << B << std::endl;
    std::cout << c << std::endl;
    std::cout << C << std::endl;

    int d, D( 5 );
    std::cout << a << " " << b << std::endl; // Saída: 0 5

return 0;

}