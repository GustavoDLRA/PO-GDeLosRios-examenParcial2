//
// Created by gusta on 02/04/2018.
//

#include "Peso.h"
Peso::Peso(float vPesos) {
    this->peso=vPesos;
}
Peso operator +(const Peso &vPeso1, const Peso &vPeso2){
    float c1;
    float c2;
    float cantRes;
    c1=vPeso1.peso;
    c2=vPeso2.peso;
    cantRes=c1+c2;
    Peso resultado = *new Peso(cantRes);

}
/*Peso operator +(const Peso &vPeso1, const Dolar &vDolar1){
    float cPesos;
    float cDolares;
    cPesos=vPeso1.peso;
}*/
/*Peso operator + (const Dolar &vDolar1, const Peso &vPeso1){
    float cDolares;
    float cPesos;
}*/

Peso operator -(const Peso &vPeso1, const Peso &vPeso2){
    float c1;
    float c2;
    float cantRes;
    c1=vPeso1.peso;
    c2=vPeso2.peso;
    cantRes=c1-c2;
    Peso resultado = *new Peso(cantRes);

}
Peso operator ++(const Peso &vPeso1){
    float cantRes;
    float cant1;
    cant1=vPeso1.peso;
    cantRes=cant1++;
    Peso resultado = *new Peso(cantRes);
}
Peso operator --(const Peso &vPeso1){
    float cantRes;
    float cant1;
    cant1= vPeso1.peso;
    cantRes=cant1--;
    Peso resultado= *new Peso(cantRes);
}
bool operator <(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1<cant2;
}
bool operator >(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1= vPeso1.peso;
    cant2 =vPeso2.peso;
    return cant1>cant2;
}
bool operator <=(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1<=cant2;
}
bool operator >=(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1 =vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1>=cant2;
}
bool operator ==(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1==cant2;
}
bool operator !=(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1!=cant2;
}
std::string Peso::toString() {
    std::string valor;
    valor= std::to_string(peso);
    return "$"+valor+"MXN";
}