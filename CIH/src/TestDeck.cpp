/*
 * TestDeck.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#include "Card.h"
#include "Deck.h"
#include <gtest/gtest.h>


TEST(TestDeck, CreateDeck) {
	Deck deck;
	ASSERT_EQ(52, deck.numberOfCardsLeft());
}

TEST(TestDeck, TakeOneCardFromDeck) {
	// Initialize
	Deck deck;
	Card card = deck.getCard();

	// Execute & Verify
	ASSERT_EQ(51, deck.numberOfCardsLeft());
}
