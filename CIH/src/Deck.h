/*
 * Deck.h
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#ifndef DECK_H_
#define DECK_H_
#include <stack>
#include "Card.h"


class Deck {
public:
	Deck();
	virtual ~Deck();
	int numberOfCardsLeft() const;
	Card getCard();

	static const int MaxDeckSize = 52;

private:
	std::stack<Card> deckOfCards;
};

#endif /* DECK_H_ */
