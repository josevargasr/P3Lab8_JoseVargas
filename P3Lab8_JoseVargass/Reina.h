/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reina.h
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:43 PM
 */

#ifndef REINA_H
#define REINA_H

#include <string>
#include <vector>
#include "Pieza.h"

using std::string;
using std::vector;


class Reina : public Pieza{
public:
    Reina();
    Reina(const Reina& orig);
    virtual ~Reina();
    bool validarMovimiento(int, int, int, int, char** );
private:

};

#endif /* REINA_H */

