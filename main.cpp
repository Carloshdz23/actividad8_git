#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora n01; 
    n01.setNomEqu("Computadora de Carlos");
    n01.setSistemaO("Windows");
    n01.setMemoria("16GB");
    n01.setDD("1TB");

    Computadora n02 = Computadora("Computadora de David", "iOs", "8GB", "500GB");

    Computadora n03;
    n03.setNomEqu("Computadora de Lionel");
    n03.setSistemaO("Linux");
    n03.setMemoria("32GB");
    n03.setDD("2TB");

    Computadora n04 = Computadora("Computadora de Andrea", "Windows", "16GB", "500GB");

    Laboratorio vc;

    vc.agregarComputadora(n01);
    vc.agregarComputadora(n02);
    vc.agregarComputadora(n03);
    vc.agregarComputadora(n04);

    // vc.mostrar();

    cout << n03;

    return 0;
}