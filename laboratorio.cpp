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
    cout << left;
    cout << setw(25) << "Nombre del Equipo: ";
    cout << setw(25) << "Sistema Operativo: ";
    cout << setw(20) << "Memoria RAM: ";
    cout << setw(15) << "Disco Duro: ";
    cout << endl;
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout << c;
        // cout << "Nombre del Equipo: " << c.getNomEqu() << endl;
        // cout << "Sistema Operativo: " << c.getSistemaO() << endl;
        // cout << "Memoria RAM: " << c.getMemoria() << endl;
        // cout << "Disco Duro: " << c.getDD() << endl;
        // cout << endl;
    }   
}