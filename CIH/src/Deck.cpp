/*
 * Deck.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#include "Deck.h"

#include <cstdlib>
#include <iostream>

Deck::Deck() {
	for (Color color = Spade; color > none && color <= Heart; color++) {
		for (Value value = Ace; value > Joker && value <= King; value++) {
			try {
				deckOfCards.push_back(Card(value, color));
			}
			catch (std::bad_alloc &err) {
				std::cout << err.what() << std::endl;
			}
		}
	}
}

Deck::~Deck() {
	// Empty
}

int Deck::numberOfCards() const {
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
	int randomNumber = rand() % numberOfCards();
	Card randomCard = deckOfCards[randomNumber];
	deckOfCards.erase(deckOfCards.begin() + randomNumber);
	return randomCard;
}
