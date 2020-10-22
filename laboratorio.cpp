#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open())
    {
        archivo << left;
        archivo << setw(25) << "Nombre del Equipo: ";
        archivo << setw(25) << "Sistema Operativo: ";
        archivo << setw(20) << "Memoria RAM: ";
        archivo << setw(15) << "Disco Duro: ";
        archivo << endl;
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c.getNomEqu() << endl;
            archivo << c.getSistemaO() << endl;
            archivo << c.getMemoria() << endl;
            archivo << c.getDD() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        string temp;
        Computadora c;

        while(true)
        {
            getline(archivo, temp); // Nombre del Equipo
            if(archivo.eof())
            {
                break;
            }
            c.setNomEqu(temp);
            getline(archivo, temp); // Sistema Operativo
            c.setSistemaO(temp);
            getline(archivo, temp); // Memoria RAM
            c.setMemoria(temp);
            getline(archivo, temp); // Disco Duro
            c.setDD(temp);

            agregarComputadora(c);
        }
    }
    archivo.close();
}