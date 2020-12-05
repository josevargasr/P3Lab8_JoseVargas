/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Partida.cpp
 * Author: josevargas
 * 
 * Created on December 4, 2020, 1:47 PM
 */

#include "Partida.h"

using namespace std;

Partida::Partida(string nombre, string tipo_pieza, vector<string> movimientos) {
    this->nombre = nombre;
    this->tipo_pieza = tipo_pieza;
    this->movimientos = movimientos;
}

Partida::Partida(const Partida& orig) {
}

Partida::~Partida() {
}

void Partida::guardarPartida(){
    ofstream output;
    output.open("bitacoraPartidas.txt", ofstream::out | ofstream::app);
    output << nombre << endl;
    output << tipo_pieza << endl;
    int size = movimientos.size();
    for(int i = 0; i < size; i++){
        output << movimientos[i] << ";";
    }
    output << endl;
    output << "---------------------------------------" << endl;
    
    output.close();
}

void Partida::agregarMovimiento(string movimiento){
    this->movimientos.push_back(movimiento);
}

