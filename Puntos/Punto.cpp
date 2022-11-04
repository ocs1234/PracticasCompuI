//
// Created by Oscar Correa on 03/11/22.
//

#include "Punto.h"
#include "cmath"

void Punto2D::SetPosicion(float temp1, float temp2) {
    x=temp1;
    y=temp2;
}

float Punto2D::GetX() {
    return x;
}

float Punto2D::GetY() {
    return y;
}

void Punto2D::Trasladar(float temp1, float temp2) {
    x=x+temp1;
    y=y+temp2;
}

void Punto2D::Escalar(float temp1, float temp2) {
    x=x*temp1;
    y=y*temp2;
}

void Punto2D::RotarRespectoAlOrigen(float temp1) {
    float aux;
    aux = x;
    x = (x * cos(temp1*3.141617/180)) - (y * sin(temp1*3.141617/180));
    y = (aux * sin(temp1*3.141617/180)) + (y * cos(temp1*3.141617/180));
}
