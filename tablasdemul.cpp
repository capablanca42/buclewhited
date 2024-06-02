#include <iostream>
using namespace std;
int main()
{
    // imprima los 10 primeros resultados de la tabla del 5
    // 5 10 15 ... 50 55 60
    for (int k = 1; k <= 12; k++)
    {
        cout << "tabla de multiplicar del 5" << endl;
        // imprimir de esta forma :5 x 1=5 5x 2=10
        cout << "5 x" << k << "=" << 5 *k<< endl;
    }
    // ejercicios: pida al usuario, que tabla desea // a continuación imprima esa tabla
    int tabla;
    cout<< "ingrese la tabla que desea calcular"<<endl; cin>>tabla;
    for (int k = 1; k <= 12; k++)
    {
        cout << tabla << "x" << k << "= " << tabla * k << endl;
    }

    return 0;
}
