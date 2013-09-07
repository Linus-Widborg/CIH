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
	Rink();
	virtual ~Rink();
	Card getPosition(const Positions pos) const;
private:
	Card players[12];
	Deck deck;
};

Positions& operator++(Positions& position);
Positions operator++(Positions& position, int);
#endif /* RINK_H_ */
