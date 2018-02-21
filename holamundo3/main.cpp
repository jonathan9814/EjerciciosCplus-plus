#include <iostream>

using namespace std;

int main()
{
    // introduccion de variables //
    float importe, deduccion;
    cout << "introduca importe ";
    cin >> importe;
    if (importe>15000)
    {
        deduccion=importe*0.16;
    }
    else
    {
        deduccion=importe*0.1;
    }
     cout << ("El importe neto es un numero real.endl",importe-deduccion);


    cout << "Hello world!" << endl;
    return 0;
}
