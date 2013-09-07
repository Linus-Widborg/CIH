/*
 * Rink.cpp
 *
 *  Created on: Sep 6, 2013
 *      Author: linus
 */

#include "Rink.h"

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


