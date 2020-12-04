/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Peon.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:44 PM
 */

#ifndef PEON_H
#define PEON_H

#include <string>
#include <vector>
#include "Pieza.h"

using std::string;
using std::vector;

class Peon : public Pieza{
public:
    Peon();
    Peon(const Peon& orig);
    virtual ~Peon();
    bool validarMovimiento(int, int, int, int, char** );
private:

};

#endif /* PEON_H */

