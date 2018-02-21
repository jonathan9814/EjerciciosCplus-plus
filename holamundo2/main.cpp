#include <iostream>

using namespace std;

int main()
{
    // introduccion de variables //
    int num1,num2,num3;
    cout << "introduzca el primer numero ";
    cin >> num1;
    cout << "introduzca el segundo numero ";
    cin >> num2;
    cout << "introduzca el tercer numero ";
    cin >> num3;
    if (num1*num2==num3)
    {
        cout << "el tercer numero es la multiplicacion de los dos primeros, es correcto ";
    }
    else
    {
        cout << "el tercer numero no es la multiplicacion de los dos primeros, es incorrecto ";
    }

    cout << "Hello world!" << endl;
    return 0;
}
