/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josevargas
 *
 * Created on December 4, 2020, 1:10 PM
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream> //file stream
using std::ifstream;

#include "Pieza.h"
#include "Reina.h"
#include "Torre.h"
#include "Alfil.h"
#include "Peon.h"
#include "Caballo.h"
#include "Partida.h"


using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

char** provisionarMatriz(int, int);
void printMatrix(char**, int);
void liberarMatriz(char**&, int);

/*
 * 
 */
int main(int argc, char** argv) {
    int valid = true;
    vector<string> movimientos;
    char** tablero = NULL;
    tablero = provisionarMatriz(8, 8);

    while (valid) {
        int option = 0;
        cout << "      MENU" << endl
                << "1. Jugar Partida" << endl
                << "2. Recrear Partida" << endl
                << "3. Salir" << endl
                << "Ingrese una opcion: ";
        cin >> option;
        switch (option) {
            case 1:
            {
                Pieza* tipo_pieza = new Pieza();
                Partida* partida;
                string nombre;
                int pieza;
                cout << "Ingrese el nombre de la partida: ";
                cin >> nombre;
                cout << "     Piezas" << endl
                        << "1. Reina" << endl
                        << "2. Torre" << endl
                        << "3. Alfil" << endl
                        << "4. Peon" << endl
                        << "5. Caballo" << endl
                        << "Ingrese la pieza que desea utilizar: ";
                cin >> pieza;
                switch (pieza) {
                    case 1:
                    {

                        tipo_pieza = new Reina();
                        tablero[0][3] = 'q';
                        tablero[7][3] = 'Q';
                        partida = new Partida(nombre, "Reina", movimientos);
                        break;
                    }
                    case 2:
                    {

                        tipo_pieza = new Torre();
                        tablero[0][7] = 't';
                        tablero[7][0] = 'T';
                        partida = new Partida(nombre, "Torre", movimientos);
                        break;
                    }
                    case 3:
                    {

                        tipo_pieza = new Alfil();
                        tablero[0][5] = 'a';
                        tablero[7][2] = 'A';
                        partida = new Partida(nombre, "Alfil", movimientos);
                        break;
                    }
                    case 4:
                    {
                        tipo_pieza = new Peon();

                        tablero[1][4] = 'p';
                        tablero[6][4] = 'P';
                        partida = new Partida(nombre, "Peon", movimientos);
                        break;
                    }
                    case 5:
                    {
                        tipo_pieza = new Caballo();

                        tablero[0][6] = 'c';
                        tablero[7][1] = 'C';
                        partida = new Partida(nombre, "Caballo", movimientos);
                        break;
                    }
                }
                bool sigue_juego = true;
                string pos;
                int xpos = 0, ypos = 0, xmove = 0, ymove = 0;
                char c_siguejugando;
                while (sigue_juego) {
                    //Primer Jugador
                    cout << "Jugador Blanco: " << endl;
                    printMatrix(tablero, 8);
                    cout << "Ingrese la posicion de la pieza y su destino (a1,a2): ";
                    cin >> pos;
                    ypos = pos.at(2) - '0';
                    ypos--;
                    ymove = pos.at(5) - '0';
                    ymove--;
                    //validacion de letra para la posicion
                    if (pos.at(1) == 'a') {
                        xpos = 0;

                    } else if (pos.at(1) == 'b') {
                        xpos = 1;

                    } else if (pos.at(1) == 'c') {
                        xpos = 2;

                    } else if (pos.at(1) == 'd') {
                        xpos = 3;

                    } else if (pos.at(1) == 'e') {
                        xpos = 4;

                    } else if (pos.at(1) == 'f') {
                        xpos = 5;

                    } else if (pos.at(1) == 'g') {
                        xpos = 6;

                    } else if (pos.at(1) == 'h') {
                        xpos = 7;
                    }

                    //validacion de letra para el movimiento
                    if (pos.at(4) == 'a') {
                        xmove = 0;

                    } else if (pos.at(4) == 'b') {
                        xmove = 1;

                    } else if (pos.at(4) == 'c') {
                        xmove = 2;

                    } else if (pos.at(4) == 'd') {
                        xmove = 3;

                    } else if (pos.at(4) == 'e') {
                        xmove = 4;

                    } else if (pos.at(4) == 'f') {
                        xmove = 5;

                    } else if (pos.at(4) == 'g') {
                        xmove = 6;

                    } else if (pos.at(4) == 'h') {
                        xmove = 7;

                    }
                    if (tipo_pieza->validarMovimiento(xpos, ypos, xmove, ymove, tablero)) {
                        partida->agregarMovimiento(pos);
                        char piece = tablero[ypos][xpos];
                        tablero[ypos][xpos] = '+';
                        tablero[ymove][xmove] = piece;
                    } else {
                        cout << "El movimiento ingresado es invalido" << endl;
                    }

                    //Segundo Jugador
                    cout << "Jugador Negro: " << endl;
                    printMatrix(tablero, 8);
                    cout << "Ingrese la posicion de la pieza y su destino (a1,a2): ";
                    cin >> pos;
                    ypos = pos.at(2) - '0';
                    ypos--;
                    ymove = pos.at(5) - '0';
                    ymove--;
                    //validacion de letra para la posicion
                    if (pos.at(1) == 'a') {
                        xpos = 0;

                    } else if (pos.at(1) == 'b') {
                        xpos = 1;

                    } else if (pos.at(1) == 'c') {
                        xpos = 2;

                    } else if (pos.at(1) == 'd') {
                        xpos = 3;

                    } else if (pos.at(1) == 'e') {
                        xpos = 4;

                    } else if (pos.at(1) == 'f') {
                        xpos = 5;

                    } else if (pos.at(1) == 'g') {
                        xpos = 6;

                    } else if (pos.at(1) == 'h') {
                        xpos = 7;
                    }

                    //validacion de letra para el movimiento
                    if (pos.at(4) == 'a') {
                        xmove = 0;

                    } else if (pos.at(4) == 'b') {
                        xmove = 1;

                    } else if (pos.at(4) == 'c') {
                        xmove = 2;

                    } else if (pos.at(4) == 'd') {
                        xmove = 3;

                    } else if (pos.at(4) == 'e') {
                        xmove = 4;

                    } else if (pos.at(4) == 'f') {
                        xmove = 5;

                    } else if (pos.at(4) == 'g') {
                        xmove = 6;

                    } else if (pos.at(4) == 'h') {
                        xmove = 7;

                    }
                    if (tipo_pieza->validarMovimiento(xpos, ypos, xmove, ymove, tablero)) {
                        partida->agregarMovimiento(pos);
                        char piece = tablero[ypos][xpos];
                        tablero[ypos][xpos] = '+';
                        tablero[ymove][xmove] = piece;
                    } else {
                        cout << "El movimiento ingresado es invalido" << endl;
                    }
                    printMatrix(tablero, 8);
                    cout << endl;
                    //Confirma si quiere seguir jugando
                    cout << "¿Desea seguir jugando? S/N: ";
                    cin >> c_siguejugando;
                    if (c_siguejugando == 'S') {

                    } else {
                        cout << "Gracias por jugar!" << endl;
                        sigue_juego = false;
                    }
                }

                liberarMatriz(tablero, 8);
                partida->guardarPartida();
                cout << endl;
                break;
            }
            case 2:
            {
                cout << endl;
                ifstream file("bitacoraPartidas.txt");
                string linea;
                if (file.is_open()) {
                    while (getline(file, linea)) {
                        cout << linea << endl;
                    }
                    file.close(); //cerrar archivo
                }
                cout << endl;
                break;
            }
            case 3:
            {
                valid = false;
                break;
            }
        }
    }
    return 0;
}

char** provisionarMatriz(int filas, int columnas) {
    //declarar
    char** letters = NULL;
    //instanciar
    letters = new char*[filas]; //primero arreglo (de filas) de char*


    for (int i = 0; i < filas; i++)
        letters[i] = new char[columnas]; //despues arreglo (de columnas) de chars


    //inicializar 
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            if (i == 0 && j == 4) {
                letters[i][j] = 'r';
            } else if (i == 7 && j == 4) {
                letters[i][j] = 'R';
            } else {
                letters[i][j] = '+';
            }

    return letters;
}

void printMatrix(char** matrix, int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == 0) {
                cout << i + 1 << " " << matrix[i][j] << " ";
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "  a b c d e f g h" << endl;
}

void liberarMatriz(char**& matrix, int size) {
    if (matrix != NULL) {
        for (int i = 0; i < size; i++) {
            if (matrix[i] != NULL) {
                delete[] matrix[i];
            }
            matrix[i] = NULL;
        }
    }

    if (matrix != NULL) {
        delete[] matrix;
        matrix = NULL;
    }
}

