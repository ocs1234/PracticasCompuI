#include <iostream>
#include <array>


using namespace std;

int main() {


    // Calculadora para dos elementos

    ffloat x=0;
    float y=0;
    float r=0;
    char c;

    cout << "Primer numero:" << endl;
    cin >> x;
    cout << "Operacion:" << endl;
    cin >> c;
    cout << "Segundo numero:" << endl;
    cin >> y;

    if (c == '+') { r = x+y; }
    if (c == '-') { r = x-y; }
    if (c == '*') { r = x*y; }
    if (c == '/') { if(y == 0) { cout << "Indeterminacion" << endl; } else r = x/y; }
    if (c == '%') { int p = x; int g = y; r = p%g; }
    else {cout << "No se ingreso ninguna operación";}

    if(r==0) {} else {cout << "Resultado:" << endl; cout << x << " " << c << " " << y << " = " << r ;}



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
