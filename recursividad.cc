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

int sumaNaturales(int N) {
    if (N == 1) {
        return 1;
    }
    return N + sumaNaturales(N - 1);
}

int main (){
    int base, exponente;

    std:: cout << "ingrese el el numero base" <<'\n';
    std:: cin >> base;
    std:: cout << "ingrese la potencia" << '\n';
    std:: cin >> exponente;

    std:: cout << "el resultado de la potencia de " << base << " elevado a " << exponente << " es: "<< potencia_recursiva(base, exponente)<<std::endl; 

int N;

    std::cout << "Ingrese el valor de N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Por favor ingrese un número natural positivo." << std::endl;
        return 1;
    }

    int resultado = sumaNaturales(N);
    std::cout << "La suma de los primeros " << N << " números naturales es: " << resultado << std::endl;

    return 0;
}