/*
 * TestDeck.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: liwid
 */

#include "../Card.h"
#include "../Deck.h"
#include <gtest/gtest.h>


TEST(TestDeck, ADeckSholudHave52Cards) {
	Deck deck;
	ASSERT_EQ(static_cast<int>(Deck::MaxDeckSize), deck.numberOfCards());
}

TEST(TestDeck, TakeOneCardFromDeck) {
	// Initialize
	Deck deck;
	Card card = deck.getCard();

	// Execute & Verify
	ASSERT_EQ(Deck::MaxDeckSize - 1, deck.numberOfCards());
}

TEST(TestDeck, CheckEmptyDeck) {
	// Initialize
	Deck deck;

	// Execute
	for (int i = 0; i < Deck::MaxDeckSize; i++) {
		Card card = deck.getCard();
	}

	// Verify
	ASSERT_EQ(0, deck.numberOfCards());
}

TEST(TestDeck, TakeOneCardFromDeckWithNoMoreCardsLeft) {
	// Initialize
	Deck deck;
	for (int i = 0; i < Deck::MaxDeckSize; i++) {
			Card card = deck.getCard();
	}

	// Execute and Verify
	ASSERT_THROW(
	{
		Card card = deck.getCard();
	},
	Deck::Empty_deck);
}

TEST(TestDeck, ADeckWithDifferentCards) {
	// Initialize
	Deck deck;

	// Execute & Verify
	ASSERT_TRUE(Card(King, Heart) == deck.getCard());
	Card card;
	while (deck.numberOfCards() > 26) {
		card = deck.getCard();
	}
	ASSERT_TRUE(Card(King, Club) == deck.getCard());
}

TEST(TestDeck, GetRandomCard) {
	// Initialize
	Deck deck;

	// Execute
	Card randomCard = deck.getRandomCard();

	// Verify
	ASSERT_EQ(Deck::MaxDeckSize - 1, deck.numberOfCards());

}


