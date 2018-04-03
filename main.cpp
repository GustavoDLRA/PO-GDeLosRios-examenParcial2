#include <iostream>
#include "Peso.h"
#include "Dolar.h"

int main() {
    Peso cantP1(20);
    Dolar cantD1(1);
    Peso cantP3= cantP1+cantD1;
    Dolar cantD3 =cantD1+cantP1;
    Peso cantP4= cantP1-cantD1;
    Dolar cantD5 = cantD1-cantP1;
    Peso cantP5=++cantP1;
    Dolar cantD6= --cantD1;
    std::cout<<"SISTEMA DE CAMBIO\n";
    std::cout<<"CANTIDAD DE DOLARES CON LAS QUE SE TRABAJA: ";
    std::cout<<cantD1.toString();
    std::cout<<"\n";
    std::cout<<"CANTIDAD DE PESOS CON LOS QUE SE TRABAJA: ";
    std::cout<<cantP1.toString();
    std::cout<<"\n";
    std::cout<<"SUMA DE AMBAS CANTIDADES EN PESOS:\n";
    std::cout<<cantP3.toString();
    std::cout<<"\n";
    std::cout<<"SUMA DE AMBAS CANTIDADES EN DOLARES:\n";
    std::cout<<cantD3.toString();
    std::cout<<"RESTA DE AMBAS CANTIDADES EN PESOS:\n";
    std::cout<<cantP4.toString();
    std::cout<<"\n";
    std::cout<<"Cant. Pesos++\n";
    std::cout<<cantP5.toString();
    std::cout<<"Cant Dolares--\n";
    std::cout<<cantD6.toString();
    




    return 0;
}