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
    bool p1;
    bool p2;
    bool p3;
    bool p4;
    bool p5;
    bool p6;
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


    cantP1<cantD1? p2=true : p2=false;
    std::cout<<"Monto en Pesos<Monto en Dolares\n";
    std::cout<<cantP1.toString();
    std::cout<<"<";
    std::cout<<cantD1.toString()+"\n";
    std::cout<<"Resultado="<<p2<<"\n";

    cantP1>cantD1? p3=true : p3=false;
    std::cout<<"Monto en Pesos>Monto en Dolares\n";
    std::cout<<cantP1.toString();
    std::cout<<">";
    std::cout<<cantD1.toString()+"\n";
    std::cout<<"Resultado="<<p3<<"\n";

    cantP1<=cantD1? p1=true : p1=false;
    std::cout<<"Monto en Pesos1<=Monto en Dolares\n";
    std::cout<<cantP1.toString();
    std::cout<<"<=";
    std::cout<<cantD1.toString()+"\n";
    std::cout<<"Resultado="<<p1<<"\n";

    cantP1>=cantD1? p4=true : p4=false;
    std::cout<<"Monto en Pesos>=Monto en Dolares\n";
    std::cout<<cantP1.toString();
    std::cout<<">=";
    std::cout<<cantD1.toString()+"\n";
    std::cout<<"Resultado="<<p4<<"\n";

    cantP1==cantD1? p5=true : p5=false;
    std::cout<<"Monto en Pesos1==Monto en Dolares\n";
    std::cout<<cantP1.toString();
    std::cout<<"==";
    std::cout<<cantD1.toString()+"\n";
    std::cout<<"Resultado="<<p5<<"\n";

    cantP1!=cantD1? p6=true : p6=false;
    std::cout<<"Monto en Pesos1!=Monto en Dolares\n";
    std::cout<<cantP1.toString();
    std::cout<<"!=";
    std::cout<<cantD1.toString()+"\n";
    std::cout<<"Resultado="<<p6<<"\n";



    return 0;
}