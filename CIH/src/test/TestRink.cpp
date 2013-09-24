/*
 * TestRink.cpp
 *
 *  Created on: Sep 6, 2013
 *      Author: linus
 */

#include "../Card.h"
#include "../Rink.h"
#include <gtest/gtest.h>

TEST(TestRink, Initialize) {
	// Initialize and Execute
	Rink rink;
	// Verify
	for (Positions pos = GK; static_cast<int>(pos) < Rink::numberOfPlayers; pos++) {
		ASSERT_NE(none, rink.getPosition(pos).getColor());
	}
}

TEST(TestRink, AttackFirstRowAndSucced) {
	// Initialize
	Rink rink;
	rink.replacePosition(RW, Card(Two, Heart));
	// Execute
	rink.attack(RW, Card(King, Heart));
	// Verify
	ASSERT_EQ(Card(zero, none), rink.getPosition(RW));
}

TEST(TestRink, AttackFirstRowAndFail) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(King, Heart);
	rink.replacePosition(CE, defendingCard);
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_FALSE(rink.attack(CE, attackingCard));
}

TEST(TestRink, FailToAttackLDWithoutSuccesfullAttackOfLWorCE) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(LD, defendingCard);
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_FALSE(rink.attack(LD, attackingCard));
}

TEST(TestRink, SuccedToAttackLDWithSuccesfullAttackOfLW) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(LD, defendingCard);
	rink.replacePosition(LW, Card());
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_TRUE(rink.attack(LD, attackingCard));
}

TEST(TestRink, SuccedToAttackLDWithSuccesfullAttackOfCE) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(LD, defendingCard);
	rink.replacePosition(CE, Card());
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_TRUE(rink.attack(LD, attackingCard));
}

TEST(TestRink, FailToAttackRDWithoutSuccesfullAttackOfRWorCE) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(RD, defendingCard);
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_FALSE(rink.attack(RD, attackingCard));
}

TEST(TestRink, FailToAttackGKWithoutSuccesfullAttackOfForwardAndDefender) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(GK, defendingCard);
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_FALSE(rink.attack(GK, attackingCard));
}

TEST(TestRink, SuccedToAttackGK) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(GK, defendingCard);
	rink.replacePosition(LW, Card());
	rink.replacePosition(LD, Card());
	Card attackingCard = Card(Five, Club);
	// Execute & Verify
	ASSERT_TRUE(rink.attack(GK, attackingCard));
}

TEST(TestRink, AttackFirstRowWithEqualValueAndFail) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(King, Heart);
	rink.replacePosition(CE, defendingCard);
	Card attackingCard = defendingCard;
	// Execute & Verify
	ASSERT_FALSE(rink.attack(CE, attackingCard));
}

TEST(TestPositions, PostIncrement) {
	// Initialize
	Positions pos = GK;
	// Execute
	++pos;
	// Verify
	ASSERT_EQ(LD, pos);
}

TEST(TestPositions, PreIncrement) {
	// Initialize
	Positions pos = GK;
	// Execute
	pos++;
	// Verify
	ASSERT_EQ(LD, pos);
}
