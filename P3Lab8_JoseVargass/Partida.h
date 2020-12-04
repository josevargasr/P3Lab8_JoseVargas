/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Partida.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:47 PM
 */

#ifndef PARTIDA_H
#define PARTIDA_H
#include <string>
#include <vector>
#include "Pieza.h"

using std::string;
using std::vector;

class Partida {
public:
    Partida(string, string, vector<string>);
    Partida(const Partida& orig);
    virtual ~Partida();
    void guardarPartida();
    void agregarMovimiento(string);
private:
    string nombre, tipo_pieza;
    vector<string> movimientos;
};

#endif /* PARTIDA_H */

