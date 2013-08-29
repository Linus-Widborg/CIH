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

TEST(TestDeck, TakeOneCardFromDeckWithNoMoreCardsLeft) {
	// Initialize
	Deck deck;

	// Execute
	for (int i = 0; i < Deck::MaxDeckSize + 1; i++) {
		Card card = deck.getCard();
	}

	// Verify
	ASSERT_EQ(0, deck.numberOfCardsLeft());
}

TEST(TestDeck, ADeckWithDifferentCards) {
	// Initialize
	Deck deck;

	// Execute & Verify
	ASSERT_TRUE(Card(King, Heart) == deck.getCard());
	Card card;
	for (int i = Deck::MaxDeckSize - 1; i > 26; i--) {
		card = deck.getCard();
	}
	ASSERT_TRUE(Card(King, Club) == deck.getCard());
}
