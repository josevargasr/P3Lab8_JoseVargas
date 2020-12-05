/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieza.cpp
 * Author: josevargas
 * 
 * Created on December 4, 2020, 1:32 PM
 */

#include "Pieza.h"

Pieza::Pieza() {
}

Pieza::Pieza(const Pieza& orig) {
}

Pieza::~Pieza() {
}

 bool Pieza::validarMovimiento(int xpos, int ypos, int xmove , int ymove, char** tablero){
    if(xpos > 7 || xpos < 0 || ypos > 7 || ypos < 0 || xmove > 7 || xmove < 0 || ymove > 7 || ymove < 0 || tablero[ypos][xpos] == '+'){
        return false;
    }else
        return true;
 }

