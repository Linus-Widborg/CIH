/*
 * Rink.cpp
 *
 *  Created on: Sep 6, 2013
 *      Author: linus
 */

#include "Rink.h"

#include <iostream>

Rink::Rink() {
	for (Positions pos = GK; static_cast<int>(pos) < numberOfPlayers; pos++) {
		players[pos] = deck.getRandomCard();
	}
}

Rink::~Rink() {
	// Empty
}

Card Rink::getPosition(const Positions pos) const {
	return players[pos];
}

//++position
Positions& operator++(Positions& position) {
	position = static_cast<Positions>(position + 1);
	return position;
}

//position++
Positions operator++(Positions& position, int int1) {
	Positions tmp = position;
	++position;
	return tmp;
}

void Rink::printRink() const {
	using namespace std;
	cout << "--------------" << endl;
	cout << "|     " << players[0].toString() << "    |" << endl;
	cout << "|  " << players[1].toString() << "   " << players[2].toString() << " |" << endl;
	cout << "| " << players[3].toString() << " " << players[4].toString() << " " << players[5].toString() << "|" << endl;
	cout << "| " << players[6].toString() << " " << players[7].toString() << " " << players[8].toString() << "|" << endl;
	cout << "|  " << players[9].toString() << "   " << players[10].toString() << " |" << endl;
	cout << "|     " << players[0].toString() << "    |" << endl;
	cout << "--------------" << endl;
}
