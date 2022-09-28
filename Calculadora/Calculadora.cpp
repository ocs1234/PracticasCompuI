#include <iostream>
#include <array>


using namespace std;

int main() {


    // Calculadora para dos elementos

    float x=0;
    float y=0;
    float r=0;
    string c;

    cout << " ingrese un numero: " << endl;
    cin >> x;
    cout << " ingrese operación a realizar " << endl;
    cin >> c;
    cout << " ingrese un numero: " << endl;
    cin >> y;

    if (c == "+") { r = x+y; }
    if (c == "-") { r = x-y; }
    if (c == "*") { r = x*y; }
    if (c == "/") { r = x/y; }
    if (c == "%") { int p = x; int g = y; r = p%g; }

    cout << "Resultado: " << r << endl;



    //Calculadora n elementos

    //float  U[10],n,aux;

    //float op = 0;
    //string a;

    //cout << " cuantos numeros deseas ingresar: " << endl;
    //cin >> n;

    //for(int i=0; i<n; i++){

        //if(i == 0) {cout << " ingrese un numero: " << endl;
            //cin >> U[i]; op = U[i];}
        //else {
            //cout << " ingrese operación a realizar: " << endl;
            //cin >> a;
            //cout << " ingrese un numero: " << endl;
            //cin >> U[i];
            //if (a == "+") { op = op + U[i]; }
            //if (a == "-") { op = op - U[i]; }
            //if (a == "*") { op = op  * U[i]; }
            //if (a == "/") { op = op/U[i]; }
            //if (a == "%") { op = op % U[i]; }
        //}
    //}

   // cout << op << endl;



    return 0;
}
