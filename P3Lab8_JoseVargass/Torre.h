/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Torre.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:43 PM
 */

#ifndef TORRE_H
#define TORRE_H

#include <string>
#include <vector>
#include "Pieza.h"

using std::string;
using std::vector;


class Torre : public Pieza{
public:
    Torre();
    Torre(const Torre& orig);
    virtual ~Torre();
    bool validarMovimiento(int, int, int, int, char** );
private:

};

#endif /* TORRE_H */

