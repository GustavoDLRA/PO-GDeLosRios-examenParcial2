//
// Created by gusta on 02/04/2018.
//

#include "Dolar.h"
Dolar::Dolar(float vDolares) {
    this->dolar=vDolares;
}
Dolar operator +(const Dolar &vDolar1, const Dolar &vDolar2){
    float cD1;
    float cD2;
    float cR;
    cD1=vDolar1.dolar;
    cD2=vDolar2.dolar;
    cR=cD1+cD2;
    return cR;
}
Dolar operator + (const Dolar &vDolar1, const Peso &vPeso1){
    float cDolares;
    float cPesos;
    float cPesoADolar;
    float cantRes;

    cDolares=vDolar1.dolar;
    cPesos=vPeso1.peso;
    cPesoADolar=cPesos/float(18.5);
    cantRes=cDolares+cPesoADolar;
    return cantRes;
}
Dolar operator -(const Dolar &vDolar1, const Dolar &vDolar2){
    float cD1;
    float cD2;
    float cR;
    cD1 = vDolar1.dolar;
    cD2=vDolar2.dolar;
    cR=cD1-cD2;
    return cR;
}
Dolar operator -(const Dolar &vDolar1, const Peso &vPeso1){
    float  cPeso1;
    float cDolar1;
    float cPesoADolar;
    float cantRes;
    cDolar1=vDolar1.dolar;
    cPeso1=vPeso1.peso;
    cPesoADolar=cPeso1/float(18.5);
    cantRes= cDolar1-cPesoADolar;
    return cantRes;
}
Dolar operator ++(const Dolar &vDolar1){
    float cantRes;
    float cant1;
    cant1=vDolar1.dolar;
    cantRes=cant1++;
    return cantRes;
}
Dolar operator --(const Dolar &vDolar1){
    float cantRes;
    float cant1;
    cant1= vDolar1.dolar;
    cantRes=cant1--;
    return cantRes;
}
std::string Dolar::toString() {
    std::string valor;
    valor= std::to_string(double(dolar));
    return "$"+valor+"USD";
}