#include <iostream>
#include <array>


using namespace std;

int main() {


    // Calculadora para dos elementos

    float x=0;
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



    return 0;
}
