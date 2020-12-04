/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caballo.cpp
 * Author: josevargas
 * 
 * Created on December 4, 2020, 1:44 PM
 */

#include "Caballo.h"

Caballo::Caballo() {
}

Caballo::Caballo(const Caballo& orig) {
}

Caballo::~Caballo() {
}

bool Caballo::validarMovimiento(int xpos, int ypos, int xmove , int ymove, char** tablero){
    if(Pieza::validarMovimiento(xpos, ypos, xmove, ymove, tablero)){
        
    }else{
        return false;
    }
}