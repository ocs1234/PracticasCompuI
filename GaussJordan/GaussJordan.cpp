#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    //ImprimirMatriz(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{

        int variables = miMatriz.size();
        for (int i = 0; i < variables; i++) {
            cout << "Solución:\n" << "x" << i << " = "<< miMatriz[i][variables]/miMatriz[i][i] << endl;
        }

    //TODO
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/

template <typename matriz>
void GaussJordan(matriz & miMatriz)
{

// Gauss

    ImprimirMatriz(miMatriz);

    int variables = miMatriz.size();
    for (int i = 0; i < variables; ++i) {
        for (int j = i+1; j < variables; ++j) {

            float l = miMatriz[j][i]*(-1/miMatriz[i][i]);
            float r = miMatriz[i][i];
            bool o = true;
            int z = 0;


            for (int k = 0; k <= variables; ++k){


                if( r != 0 ){

                    miMatriz[j][k] = l*miMatriz[i][k] + miMatriz[j][k];
                    //ImprimirMatriz(miMatriz);
                    //cout << miMatriz[j][k] << "---------" << i << j << k << endl;

                }
                else {

                    if(o==true){
                        for (int m = 0; m < variables; ++m) {
                            if(miMatriz[m][i] != 0){
                                o=false;
                                z = m;
                                break;
                            }
                        }
                    }

                    float n = miMatriz[z][k];
                    miMatriz[z][k] = miMatriz[i][k];
                    miMatriz[i][k] = n;

                    if( k==variables ){ r = miMatriz[i][i]; l = miMatriz[j][i]*(-1/miMatriz[i][i]); }

                    //miMatriz[z][k] = s*(-1/miMatriz[z][i])*miMatriz[i][k] + miMatriz[z][k];
                    //ImprimirMatriz(miMatriz);
                    //cout << miMatriz[j][k] << "---------" << i << j << k << r << endl;

                }

            }
        }
    }


// Jordan

    for (int i = variables-1; i >= 1; --i) {
        for (int j = i-1; j >= 0; --j) {

            float l = miMatriz[j][i]*(-1/miMatriz[i][i]);
            int r = miMatriz[i][i];
            int z=0;
            bool o=true;

            for (int k = variables; k >= 0; --k){

                if( miMatriz[i][i] != 0 ){

                    miMatriz[j][k] = l*miMatriz[i][k] + miMatriz[j][k];
                   //ImprimirMatriz(miMatriz);
                   //cout << miMatriz[j][k] << "---------" << i << j << k << endl;


                }
                else {

                    if(o==true){
                        for (int m = 0; m < variables; ++m) {
                            if(miMatriz[m][i] != 0){
                                o=false;
                                z = m;
                                break;
                            }
                        }
                    }

                    float n = miMatriz[z][k];
                    miMatriz[z][k] = miMatriz[i][k];
                    miMatriz[i][k] = n;

                    if( k==variables ){ r = miMatriz[i][i]; l = miMatriz[j][i]*(-1/miMatriz[i][i]); }

                    //ImprimirMatriz(miMatriz);
                    //cout << miMatriz[j][k] << "---------" << i << j << k << r << endl;

                }
            }
        }
    }
    //TODO
}
