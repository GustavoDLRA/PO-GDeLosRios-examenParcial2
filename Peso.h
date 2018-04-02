//
// Created by gusta on 02/04/2018.
//

#ifndef EXAMENPARCIAL2_PESO_H
#define EXAMENPARCIAL2_PESO_H

#include <iostream>
class Dolar;

class Peso {
//Definimos los atributos de la clase
protected:
    float peso;
//Métodos
public:
    //Constructor
    Peso(float vPesos);
    //Operadores
friend Peso operator + (const Peso &vPeso1, const Peso &vPeso2); //Peso+Peso
friend Peso operator + (const Peso &vPeso1, const Dolar &vDolar1); //Peso+Dolar
friend Peso operator + (const Dolar &vDolar1, const Peso &vPeso1);//Dolar +Peso
friend Peso operator - (const Peso &vPeso1, const Peso &vPeso2); //Peso -Peso
friend Peso operator - (const Peso &vPeso1, const Dolar &vDolar1); //Peso -Dolar
friend Peso operator - (const Dolar &vDolar1, const Peso &vPeso1); //Dolar-Peso
friend Peso operator ++ (const Peso &vPeso1);
friend Peso operator -- (const Peso &vPeso1);
friend bool operator <(const Peso &vPeso1, const Peso &vPeso2);
friend bool operator > (const Peso &vPeso1, const Peso &vPeso2);
friend bool operator <= (const Peso &vPeso1, const Peso &vPeso2);
friend bool operator >= (const Peso &vPeso1, const Peso &vPeso2);
friend bool operator == (const Peso &vPeso1, const Peso &vPeso2);
friend bool operator != (const Peso &vPeso1, const Peso &vPeso2);
    //Metodo toString()
std::string toString();

};


#endif //EXAMENPARCIAL2_PESO_H
