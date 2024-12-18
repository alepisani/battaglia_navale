#include "il_mare.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	griglia g1;
	griglia g2;
	griglia m1;
	griglia m2;
	griglia g;
	g1.inizio();
	g2.inizio();
	m1.inizio();
	m2.inizio();
	g.printgriglia();
	cout << "player_1" << endl;
	g1.piazzanave();
	cout << "player_2" << endl;
	g2.piazzanave();
	g.fucking_war(g1, g2, m1, m2);

	return 0;
}

