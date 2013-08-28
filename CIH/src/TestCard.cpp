/*
 * Card_test.cpp
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#include "Card.h"
#include <gtest/gtest.h>


TEST(CardTest, GetDefaultValue) {
	Card card;
	ASSERT_EQ(Card::none, card.getValue());
}

TEST(CardTest, PresetValue) {
	Card card(Card::Ace);
	ASSERT_EQ(Card::Ace, card.getValue());
}

TEST(CardTest, GetDefaultColor) {
	Card card;
	ASSERT_EQ(Card::none, card.getColor());
}

TEST(CardTest, PresetColor) {
	Card card(Card::Ace, Card::Spade);
	ASSERT_EQ(Card::Spade, card.getColor());
}
