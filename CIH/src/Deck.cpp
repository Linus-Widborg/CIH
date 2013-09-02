/*
 * Deck.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#include "Deck.h"

#include <cstdlib>

Deck::Deck() {
	for (Color color = Spade; color <= Heart; color++) {
		for (Value value = Ace; value <= King; value++) {
			deckOfCards.push_back(Card(value, color));
		}
	}
}

Deck::~Deck() {
	// Empty
}

int Deck::numberOfCardsLeft() const {
	return deckOfCards.size();
}

Card Deck::getCard() throw (Empty_deck) {
	Card card;
	if (deckOfCards.empty()) {
		throw Empty_deck();
	}
	else {
		card = deckOfCards.back();
		deckOfCards.pop_back();
	}
	return card;
}

Card Deck::getRandomCard() throw (Empty_deck) {
	if (deckOfCards.empty()) {
		throw Empty_deck();
	}
	int randomNumber = rand() % numberOfCardsLeft();
	Card randomCard = deckOfCards[randomNumber];
	deckOfCards.erase(deckOfCards.begin() + randomNumber);
	return randomCard;
}
