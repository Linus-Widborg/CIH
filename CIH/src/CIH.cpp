//============================================================================
// Name        : CIH.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Deck.h"
using namespace std;

int main() {
	cout << "Welcome to CIH" << endl;
	Deck deck;
	Card rink[12];
	cout << "GK LD RD LW CE RW" << endl;
	for (int i = 0; i < 12; i++) {
		rink[i] = deck.getRandomCard();
		cout << rink[i].toString() << " ";
		if (i == 6) {
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
