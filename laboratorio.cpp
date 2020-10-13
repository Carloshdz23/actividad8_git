#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    if(cont < 5)
    {
        arreglo[cont] = c;
        cont++;
    }
    else
    {
        cout << "Arreglo Lleno." << endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout << "Nombre del Equipo: " << c.getNomEqu() << endl;
        cout << "Sistema Operativo: " << c.getSistemaO() << endl;
        cout << "Memoria RAM: " << c.getMemoria() << endl;
        cout << "Disco Duro: " << c.getDD() << endl;
        cout << endl;
    }   
}