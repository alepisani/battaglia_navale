#include "il_mare.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*griglia::griglia()
{

}*/

void griglia::inizio() {
    char grid[11][11] = {
       {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '1'}, // Intestazione delle colonne
       {'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'2', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'3', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'4', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'5', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'8', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'9', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
       {'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'}
    };
    /*
    // Stampa la griglia
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            // Stampa il mare (~) o la parte della griglia
            cout << setw(2) << grid[i][j] << " ";

        }
        cout << endl;
    }*/
}

void griglia::printgriglia() const {
    system("cls");
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout << setw(2) << grid[i][j] << " ";

        }
        cout << endl;
    }
}

void griglia::piazzanave() { 
    for (int k = 0; k < 5; k++) {
        int r, c;
        //vorrei che nel ciclo mi dicesse anche ci sta giocando, palyer_1_2
        cout << "riga: "; cin >> r;
        cout << "colonna: "; cin >> c;
        grid[r][c] = '#';
        printgriglia();
    }
    /*
    cout << "posizionare barca da 4 grid \n le barche devono essere messe in orizzontale o verticale, non devono toccarsi " << endl;
    for (int k = 0; k < 4; k++) {
        int r, c;
        cout << "riga: "; cin >> r;
        cout << "colonna: "; cin >> c;
        grid[r][c] = '#';
        printgriglia();
    }
    cout << "posizionare barca da 3 grid \n le barche devono essere messe in orizzontale o verticale, non devono toccarsi " << endl;
    for (int k = 0; k < 3; k++) {
        int r, c;
        cout << "riga: "; cin >> r;
        cout << "colonna: "; cin >> c;
        grid[r][c] = '#';
        printgriglia();
    }
    cout << "posizionare barca da 3 grid \n le barche devono essere messe in orizzontale o verticale, non devono toccarsi " << endl;
    for (int k = 0; k < 3; k++) {
        int r, c;
        cout << "riga: "; cin >> r;
        cout << "colonna: "; cin >> c;
        grid[r][c] = '#';
        printgriglia();
    }
    cout << "posizionare barca da 2 grid \n le barche devono essere messe in orizzontale o verticale, non devono toccarsi " << endl;
    for (int k = 0; k < 2; k++) {
        int r, c;
        cout << "riga: "; cin >> r;
        cout << "colonna: "; cin >> c;
        grid[r][c] = '#';
        printgriglia();
    }
    */
}


void griglia::fucking_war(griglia& boat1, griglia& boat2, griglia& ground1, griglia& ground2) {
    bool shot1 = true;
    bool shot2 = true;
    bool victory = false;
    int r, c;
    while(victory == false){
        while (shot1) {
            ground1.printgriglia();
            cout << "player_1" << endl;
            cout << "riga: "; cin >> r;
            cout << "colonna: "; cin >> c;
            if (boat2.grid[r][c] == '#') {
                ground1.grid[r][c] = 'X';
                boat2.grid[r][c] = 'C';
                shot1 = true;
                ground1.printgriglia();
                ground2.printgriglia();
            }
            else {
                ground1.grid[r][c] = 'O'; shot1 = false; shot2 = true;
                ground1.printgriglia();
                ground2.printgriglia();
            }
            //victory condition
            /*
            for (int i = 0; i < 11; i++) {
                for (int j = 0; j < 11; j++) {
                    if (boat2.grid[i][j] != '#') {
                        victory = true;
                        cout << "sei un campione, hai f*king vinto la f*king war!";
                    }
                }
             */ 
            }

        while (shot2) {
            ground2.printgriglia(); 
            cout << "player_2" << endl;
            cout << "riga: "; cin >> r;
            cout << "colonna: "; cin >> c;
            if (boat1.grid[r][c] == '#') {
                ground2.grid[r][c] = 'X';
                boat1.grid[r][c] = 'C';
                shot2 = true; 
                ground2.printgriglia();
                ground1.printgriglia();
            }
            else{
                ground2.grid[r][c] = 'O'; 
                shot2 = false; shot1 = true;
                ground2.printgriglia();
                ground1.printgriglia();
            }
            //victory condition
            /*
            for (int i = 0; i < 11; i++) {
                for (int j = 0; j < 11; j++) {
                    if (boat1.grid[i][j] != '#') {
                        victory = true;
                        cout << "sei un campione, hai f*king vinto la f*king war!";
                    }
                }
            */ 
        }
    }
}

//vorrei entrambe le grid a display ma ne printa una alla volta