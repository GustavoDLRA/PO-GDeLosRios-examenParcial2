//
// Created by gusta on 02/04/2018.
//

#ifndef EXAMENPARCIAL2_DOLAR_H
#define EXAMENPARCIAL2_DOLAR_H

#include "Peso.h"
#include <iostream>

class Peso;
class Dolar {
//Atributos de la clase:
public:
    float dolar;
//Metodos
public:
//Constructor
Dolar(float vDolares);
//Operadores
    friend Dolar operator + (const Dolar &vDolar1, const Dolar &vDolar2); //Dolar+Dolar
    friend Dolar operator + (const Dolar &vDolar1, const Peso &vPeso1); //Dolar+Peso
    friend Dolar operator - (const Dolar &vDolar1, const Dolar &vDolar2); //Dolar-Dolar
    friend Dolar operator - (const Dolar &vDolar1, const Peso &vPeso1); //Dolar-Peso
    friend Dolar operator ++ (const Dolar &vDolar1);
    friend Dolar operator -- (const Dolar &vDolar1);
//Los Booleanos están todos en Peso.cpp
//Metodo toString();
std::string toString();




};


#endif //EXAMENPARCIAL2_DOLAR_H
