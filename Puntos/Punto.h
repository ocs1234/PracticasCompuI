//
// Created by Oscar Correa on 03/11/22.
//

#ifndef PRACTICA3_PUNTO_H
#define PRACTICA3_PUNTO_H


class Punto2D{

private:

    float x,y;

public:

    void SetPosicion(float temp1, float temp2);

    float GetX();
    float GetY();

    void Trasladar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2);

};


#endif //PRACTICA3_PUNTO_H
