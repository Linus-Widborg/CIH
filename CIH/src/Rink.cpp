/*
 * Rink.cpp
 *
 *  Created on: Sep 6, 2013
 *      Author: linus
 */

#include "Rink.h"

#include <iostream>
#include <iomanip>

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

void Rink::printRink() const {
	using namespace std;
	cout << left;
	cout << "--------------" << endl;
	cout << "|     " << setw(3) << players[0].toString() << "    |" << endl;
	cout << "|  " << setw(3) << players[1].toString() << "   " << setw(3) << players[2].toString() << " |" << endl;
	cout << "| " << setw(3) << players[3].toString() << " " << setw(3) << players[4].toString() << " " << setw(3) << players[5].toString() << "|" << endl;
	cout << "| " << setw(3) << players[6].toString() << " " << setw(3) << players[7].toString() << " " << setw(3) << players[8].toString() << "|" << endl;
	cout << "|  " << setw(3) << players[9].toString() << "   " << setw(3) << players[10].toString() << " |" << endl;
	cout << "|     " << setw(3) << players[0].toString() << "    |" << endl;
	cout << "--------------" << endl;
}

void Rink::attack(const Positions pos, const Card card) {
	if (card.getValue() > players[pos].getValue()) {
		players[pos] = Card(zero, none);
	}
}

void Rink::replacePosition(const Positions pos, const Card card) {
	players[pos] = card;
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
