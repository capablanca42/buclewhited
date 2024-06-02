#include<iostream>
using namespace std;
main()
{
    //uso de bucle do. white
    //diseñe el programa que realice la sumatoria de los números 
    //desde el 1 al 100
    //por ejemplo1+2+3+4 ... 99+100;
    //use un acumuladord:suma=suma + valor 
    int suma=0; //suma será usando como acumulador 
    int cont=1;
    do{
        suma= suma+ cont;
        cont++;
    }while(cont<=100)
    cout<<endl<<"l sumatoria de números desde 1 al 100 es "<<suma;
    //otra forma
    suma=0;
    cont=0;
    do {
    cont++
    suma+=cont;//suma=suma + con;
    }while(cont);
    
}