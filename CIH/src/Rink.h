/*
 * Rink.h
 *
 *  Created on: Sep 6, 2013
 *      Author: linus
 */

#ifndef RINK_H_
#define RINK_H_
#include "Card.h"
#include "Deck.h"

enum Positions {
	GK,
	LD,
	RD,
	LW,
	CE,
	RW
};


class Rink {
public:
	static const int numberOfPlayers = 12;

	Rink();
	virtual ~Rink();
	Card getPosition(const Positions pos) const;
	void printRink() const;

private:
	Card players[numberOfPlayers];
	Deck deck;
};

Positions& operator++(Positions& position);
Positions operator++(Positions& position, int);
#endif /* RINK_H_ */
