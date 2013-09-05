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
	cout << "GK  LD  RD  LW  CE  RW " << endl;
	cout << "-----------------------" << endl;
	while (deck.numberOfCards() > 12) {
		for (int i = 0; i < 12; i++) {
			rink[i] = deck.getRandomCard();
			cout.width(3);
			cout << left << rink[i].toString() << " ";
			if (i == 5) {
				cout << endl;
			}
		}
		cout << endl;
		cout << "=======================" << endl;
	}
	return 0;
}
