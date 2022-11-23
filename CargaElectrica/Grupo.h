//
// Created by Oscar Correa on 21/11/22.
//

#include <string>

#ifndef PRACTICACARGAS_GRUPO_H
#define PRACTICACARGAS_GRUPO_H

using namespace std;

class Grupo {

public:
    Grupo(string ,float ,int );//Constructor
    Grupo();
    string GetN();
    float Getpk();
    int GetCar();


private:
    string nombre;
    int cargaGrupo;
    float PkGrupo;

};


#endif //PRACTICACARGAS_GRUPO_H
