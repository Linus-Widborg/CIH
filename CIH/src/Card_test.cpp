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

TEST(CardTest, CheckPresetValue) {
	Card card(1);
	ASSERT_EQ(1, card.getValue());
}

TEST(CardTest, GetDefaultColor) {
	Card card;
	ASSERT_EQ(Card::none, card.getColor());
}

TEST(CardTest, PresetValue) {
	Card card(1, Card::Spade);
	ASSERT_EQ(Card::Spade, card.getColor());
}
