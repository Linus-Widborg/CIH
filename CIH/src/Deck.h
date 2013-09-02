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

	struct Empty_deck {};
	int numberOfCardsLeft() const;
	Card getCard() throw (Empty_deck);

	static const int MaxDeckSize = 52;

private:
	std::stack<Card> deckOfCards;
};

#endif /* DECK_H_ */
