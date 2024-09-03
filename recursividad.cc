#include <iostream>
#include <math.h>

int potencia_recursiva( int base, int exponente){

  
    //caso base
    if (exponente == 0)
    {
        return 1;
    } else if (exponente == 1 )
    {
        return base;
    } else {
        return base * potencia_recursiva(base, exponente-1);

    }


}

int main (){
    int base, exponente;

    std:: cout << "ingrese el el numero base" <<'\n';
    std:: cin >> base;
    std:: cout << "ingrese la potencia" << '\n';
    std:: cin >> exponente;

    std:: cout << "el resultado de la potencia de " << base << " elevado a " << exponente << " es: "<< potencia_recursiva(base, exponente);



    return 0;
}