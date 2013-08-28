/*
 * Deck.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#include "Deck.h"

Deck::Deck() {
	for (int i = 0; i < 52; i++) {
		deckOfCards.push(Card());
	}
}

Deck::~Deck() {
	// Empty
}

int Deck::numberOfCardsLeft() const {
	return deckOfCards.size();
}

Card Deck::getCard() {
	Card card = deckOfCards.top();
	deckOfCards.pop();
	return card;
}
