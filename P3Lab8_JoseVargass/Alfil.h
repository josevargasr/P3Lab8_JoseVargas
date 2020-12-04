/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alfil.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:44 PM
 */

#ifndef ALFIL_H
#define ALFIL_H



#include <string>
#include <vector>
#include "Pieza.h"

using std::string;
using std::vector;

class Alfil : public Pieza{
public:
    Alfil();
    Alfil(const Alfil& orig);
    virtual ~Alfil();
    bool validarMovimiento(int, int, int, int, char** );
private:

};

#endif /* ALFIL_H */

