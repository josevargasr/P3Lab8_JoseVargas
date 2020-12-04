/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caballo.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:44 PM
 */

#ifndef CABALLO_H
#define CABALLO_H

#include <string>
#include <vector>
#include "Pieza.h"

using std::string;
using std::vector;

class Caballo : public Pieza{
public:
    Caballo();
    Caballo(const Caballo& orig);
    virtual ~Caballo();
    bool validarMovimiento(int, int, int, int, char** );
private:

};

#endif /* CABALLO_H */

