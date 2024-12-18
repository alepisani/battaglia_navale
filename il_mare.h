#pragma once

#include <array> // rende statici gli array
#include <string_view> //evita copie di stringhe
#include <string>
#include <iomanip>
//#include "puoint.h"
using namespace std;


class griglia {
private:
    char grid[11][11] = {
       {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},
       {'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'2', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'3', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'4', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'5', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'8', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'9', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'0', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'}
    };
public:
    griglia(){};
    void inizio();
    void printgriglia() const;
    void piazzanave();
    void fucking_war(griglia&, griglia&, griglia&, griglia&);

};




