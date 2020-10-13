#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
    string nombredelequipo;
    string sistemaoperativo;
    string memoriaram;
    string discoduro;
public:
    Computadora();
    Computadora(const string &nombredelequipo, const string &sistemaoperativo, const string &memoriaram, const string &discoduro);
    void setNomEqu(const string &v);
    string getNomEqu();
    void setSistemaO(const string &v);
    string getSistemaO();
    void setMemoria(const string &v);
    string getMemoria();
    void setDD(const string &v);
    string getDD();
};

#endif