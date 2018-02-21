#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "ingrese primer numero ";
    cin >> num1;
    cout << "ingrese segundo numero ";
    cin >> num2;
    cout << "ingrese tercer numero ";
    cin >> num3;
    if (num1+num2==num3)
    {
        cout << "el tercer numero es la suma de los dos primeros, es correcto ";
    }
    else
    {
        cout << "el tercer numero no es la suma de los dos primeros, es incorrecto ";
    }

    cout << "Hello world!" << endl;
    return 0;
}
