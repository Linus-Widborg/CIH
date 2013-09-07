/*
 * Card_test.cpp
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#include "../Card.h"
#include <gtest/gtest.h>


TEST(CardTest, GetDefaultValue) {
	Card card;
	ASSERT_EQ(zero, card.getValue());
}

TEST(CardTest, PresetValue) {
	Card card(Ace);
	ASSERT_EQ(Ace, card.getValue());
}

TEST(CardTest, GetDefaultColor) {
	Card card;
	ASSERT_EQ(none, card.getColor());
}

TEST(CardTest, PresetColor) {
	Card card(Ace, Spade);
	ASSERT_EQ(Spade, card.getColor());
}
TEST(CardTest, ToString) {
	// Initialize and Execute
	Card card(Two, Club);

	// Verify
	ASSERT_EQ("C2", card.toString());
}
TEST(CardTest, PrintKingOfHeartsAsHK) {
	// Initialize and Execute
	Card card(King, Heart);
	// Verify
	ASSERT_EQ("HK", card.toString());
}

TEST(ColorTest, IncrementOneBeyondEnd) {
	// Initialize
	Color color = Heart;
	// Execute
	++color;
	// Verify
	ASSERT_EQ(zero, color);
}

TEST(ValueTest, IncrementOneBeyondEnd) {
	// Initialize
	Value value = King;
	// Execute
	++value;
	// Verify
	ASSERT_EQ(zero, value);
}
