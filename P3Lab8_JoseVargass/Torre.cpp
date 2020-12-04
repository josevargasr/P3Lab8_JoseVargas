/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Torre.cpp
 * Author: josevargas
 * 
 * Created on December 4, 2020, 1:43 PM
 */

#include "Torre.h"

Torre::Torre() {
}

Torre::Torre(const Torre& orig) {
}

Torre::~Torre() {
}

bool Torre::validarMovimiento(int xpos, int ypos, int xmove , int ymove, char** tablero){
    if(Pieza::validarMovimiento(xpos, ypos, xmove, ymove, tablero)){
        
    }else{
        return false;
    }
}