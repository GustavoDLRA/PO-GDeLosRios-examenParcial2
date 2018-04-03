//
// Created by gusta on 02/04/2018.
//

#include "Peso.h"
#include "Dolar.h"

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
    return cantRes;

}
Peso operator +(const Peso &vPeso1, const Dolar &vDolar1){
    float cPesos;
    float cDolares;
    float cDolarAPeso;
    float cantRes;

    cPesos= vPeso1.peso;
    cDolares=vDolar1.dolar;
    cDolarAPeso=float(18.5)*cDolares;
    cantRes= cPesos+cDolarAPeso;
    return cantRes;


}


Peso operator -(const Peso &vPeso1, const Peso &vPeso2){
    float c1;
    float c2;
    float cantRes;
    c1=vPeso1.peso;
    c2=vPeso2.peso;
    cantRes=c1-c2;
    return cantRes;

}
Peso operator -(const Peso &vPeso1, const Dolar &vDolar1){
    float cPeso1;
    float cDolar1;
    float cDolarAPeso;
    float cantRes;
    cPeso1=vPeso1.peso;
    cDolar1=vDolar1.dolar;
    cDolarAPeso=float(18.5)*cDolar1;
    cantRes= cPeso1-cDolarAPeso;
    return cantRes;


}
Peso operator ++(const Peso &vPeso1){
    float cantRes;
    float cant1;
    cant1=vPeso1.peso;
    cantRes=cant1++;
    return cantRes;
}
Peso operator --(const Peso &vPeso1){
    float cantRes;
    float cant1;
    cant1= vPeso1.peso;
    cantRes=cant1--;
    return cantRes;
}
bool operator <(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1<cant2;
}
bool operator < (const Peso &vPeso1, const Dolar &vDolar1){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=float(18.5)*vDolar1.dolar;
    return cant1<cant2;
}
bool operator < (const Dolar &vDolar1, const Peso &vPeso1){
    float cant1;
    float cant2;
    cant2=vPeso1.peso;
    cant1=float(18.5)*vDolar1.dolar;
    return cant1<cant2;
}
bool operator >(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1= vPeso1.peso;
    cant2 =vPeso2.peso;
    return cant1>cant2;
}
bool operator > (const Peso &vPeso1, const Dolar &vDolar1){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=float(18.5)*vDolar1.dolar;
    return cant1>cant2;
}
bool operator > (const Dolar &vDolar1, const Peso &vPeso1){
    float cant1;
    float cant2;
    cant2=vPeso1.peso;
    cant1=float(18.5)*vDolar1.dolar;
    return cant1>cant2;
}
bool operator <=(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1<=cant2;
}
bool operator <= (const Peso &vPeso1, const Dolar &vDolar1){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=float(18.5)*vDolar1.dolar;
    return cant1<=cant2;
}
bool operator <= (const Dolar &vDolar1, const Peso &vPeso1){
    float cant1;
    float cant2;
    cant2=vPeso1.peso;
    cant1=float(18.5)*vDolar1.dolar;
    return cant1<=cant2;
}
bool operator >=(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1 =vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1>=cant2;
}
bool operator >= (const Peso &vPeso1, const Dolar &vDolar1){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=float(18.5)*vDolar1.dolar;
    return cant1>=cant2;
}
bool operator >= (const Dolar &vDolar1, const Peso &vPeso1){
    float cant1;
    float cant2;
    cant2=vPeso1.peso;
    cant1=float(18.5)*vDolar1.dolar;
    return cant1>=cant2;
}
bool operator ==(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1==cant2;
}
bool operator == (const Peso &vPeso1, const Dolar &vDolar1){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=float(18.5)*vDolar1.dolar;
    return cant1==cant2;
}
bool operator == (const Dolar &vDolar1, const Peso &vPeso1){
    float cant1;
    float cant2;
    cant2=vPeso1.peso;
    cant1=float(18.5)*vDolar1.dolar;
    return cant1==cant2;
}
bool operator !=(const Peso &vPeso1, const Peso &vPeso2){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=vPeso2.peso;
    return cant1!=cant2;
}
bool operator != (const Peso &vPeso1, const Dolar &vDolar1){
    float cant1;
    float cant2;
    cant1=vPeso1.peso;
    cant2=float(18.5)*vDolar1.dolar;
    return cant1!=cant2;
}
bool operator != (const Dolar &vDolar1, const Peso &vPeso1){
    float cant1;
    float cant2;
    cant2=vPeso1.peso;
    cant1=float(18.5)*vDolar1.dolar;
    return cant1!=cant2;
}

std::string Peso::toString() {
    std::string valor;
    valor= std::to_string(double(peso));
    return "$"+valor+"MXN";
}