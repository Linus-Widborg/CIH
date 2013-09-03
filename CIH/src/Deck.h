/*
 * Deck.h
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#ifndef DECK_H_
#define DECK_H_
#include <vector>
#include "Card.h"


class Deck {
public:
	Deck();
	virtual ~Deck();

	struct Empty_deck {};

	int numberOfCards() const;
	Card getCard() throw (Empty_deck);
	Card getRandomCard() throw (Empty_deck);

	static const int MaxDeckSize = 52;

private:
	std::vector<Card> deckOfCards;
};

#endif /* DECK_H_ */
