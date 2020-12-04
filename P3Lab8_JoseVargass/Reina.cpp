/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reina.cpp
 * Author: josevargas
 * 
 * Created on December 4, 2020, 1:43 PM
 */

#include "Reina.h"

Reina::Reina() {
}

Reina::Reina(const Reina& orig) {
}

Reina::~Reina() {
}

bool Reina::validarMovimiento(int xpos, int ypos, int xmove , int ymove, char** tablero){
    if(Pieza::validarMovimiento(xpos, ypos, xmove, ymove, tablero)){
        return true;
    }else{
        return false;
    }
}

