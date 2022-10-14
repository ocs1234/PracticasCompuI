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
    //ImprimirMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);
    //ImprimirMatriz(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

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
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{

    int fila =1;
    float temp = 0;
    int sumafila = 0;
    for (int i = 0; i < miMatriz.size() ; i++) {
        fila = 1;
        while (miMatriz[i][i] == 0 && fila < miMatriz.size()) {
            for (int j = 0; j <= miMatriz.size(); j++) {
                temp = miMatriz[i][j];
                miMatriz[i][j] = miMatriz[fila][j];
                miMatriz[fila][j] = temp;
            }
            fila++;
        }
        if (fila == miMatriz.size()) {
            continue;
        }
    }
    int variables = 3;
    for (int j = 0; j < variables-1; j++) {

        for (int i = 0; i < (variables-1); i++) {

            float multiplicador = (miMatriz[i + 1 +j][j] / miMatriz[j][j]);


            for (int k = 0; k <= variables; k++) {
                miMatriz[i + 1 + j][k+j] = miMatriz[i + 1 +j][k+j] - (miMatriz[j][k+j] * multiplicador);


            }
        }
    }
    for (int j = variables-1 ; j >= 1; j--) {

        for (int i = (variables-1); i > 0 ; i--) {
            float multiplicador = (miMatriz[i-3+j][j]/miMatriz[j][j]);


            for (int k = variables; k >=0 ; k--) {

                miMatriz[i-3+j][k] = miMatriz[i-3+j][k] - (miMatriz[j][k] * multiplicador);

            }

        }

    }

}
