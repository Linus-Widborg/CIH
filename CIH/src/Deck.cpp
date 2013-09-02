/*
 * Deck.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#include "Deck.h"

Deck::Deck() {
	for (Color color = Spade; color <= Heart; color++) {
		for (Value value = Ace; value <= King; value++) {
			deckOfCards.push(Card(value, color));
		}
	}
}

Deck::~Deck() {
	// Empty
}

int Deck::numberOfCardsLeft() const {
	return deckOfCards.size();
}

Card Deck::getCard() {
	Card card;
	if (!deckOfCards.empty()) {
		card = deckOfCards.top();
		deckOfCards.pop();
	}
	return card;
}
