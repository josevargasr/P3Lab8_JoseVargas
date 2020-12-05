/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alfil.cpp
 * Author: josevargas
 * 
 * Created on December 4, 2020, 1:44 PM
 */

#include "Alfil.h"

Alfil::Alfil() {
}

Alfil::Alfil(const Alfil& orig) {
}

Alfil::~Alfil() {
}

bool Alfil::validarMovimiento(int xpos, int ypos, int xmove , int ymove, char** tablero){
    if(Pieza::validarMovimiento(xpos, ypos, xmove, ymove, tablero)){
        return true;
    }else{
        return false;
    }
}