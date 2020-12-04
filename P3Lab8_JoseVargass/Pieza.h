/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieza.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:32 PM
 */

#ifndef PIEZA_H
#define PIEZA_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class Pieza  {
public:
    Pieza();
    Pieza(const Pieza& orig);
    virtual ~Pieza();
    virtual bool validarMovimiento(int, int, int, int, char** );
private:
    
};

#endif /* PIEZA_H */

