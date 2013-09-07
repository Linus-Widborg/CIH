//============================================================================
// Name        : CIH.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "Deck.h"
#include "Rink.h"

using namespace std;

int positionToIndex(const string position) {
	if (position.compare("GK") == 0) {
		return 0;
	}
	else if (position.compare("LD") == 0) {
		return 1;
	}
	else if (position.compare("RD") == 0) {
		return 2;
	}
	else if (position.compare("LW") == 0) {
		return 3;
	}
	else if (position.compare("CE") == 0) {
		return 4;
	}
	else if (position.compare("RW") == 0) {
		return 5;
	}
	return 0;
}

int main() {
	cout << "Welcome to CIH" << endl;
	Rink rink;
	rink.printRink();
//	Deck deck;
//	Card rink[12];
//	cout << "GK  LD  RD  LW  CE  RW " << endl;
//	cout << "-----------------------" << endl;
//	for (int i = 0; i < 12; i++) {
//		rink[i] = deck.getRandomCard();
//		cout.width(3);
//		cout << left << rink[i].toString() << " ";
//		if (i == 5) {
//			cout << endl;
//		}
//	}
//	cout << endl;
//	string position;
//	Card attackingCard;
//	int index;
//	int player = 1;
//	while (true) {
//		attackingCard = deck.getRandomCard();
//		cout << "Spelare " << player << " ditt kort är " << attackingCard.toString() << endl;
//		cout << "Välj var du vill anfalla." << endl;
//		cin >> position;
//		index = positionToIndex(position) + (6 * (player - 1));
//		if (static_cast<int>(attackingCard.getValue()) > static_cast<int>(rink[index].getValue())) {
//			if (index == 0 || index == 6) {
//				cout << "Mål!" << endl;
//			}
//			else {
//				cout << "Du tog dig förbi!" << endl;
//			}
//			rink[index] = Card();
//		}
//		else {
//			if (player == 1) {
//				player = 2;
//			}
//			else {
//				player = 1;
//			}
//		}
//	}
	return 0;
}
