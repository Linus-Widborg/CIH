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
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(CE, attackingCard);
	// Verify
	ASSERT_EQ(defendingCard, rink.getPosition(CE));
}

TEST(TestRink, FailToAttackLDWithoutSuccesfullAttackOfLWorCE) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(LD, defendingCard);
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(LD, attackingCard);
	// Verify
	ASSERT_EQ(defendingCard, rink.getPosition(LD));
}

TEST(TestRink, SuccedToAttackLDWithSuccesfullAttackOfLW) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(LD, defendingCard);
	rink.replacePosition(LW, Card());
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(LD, attackingCard);
	// Verify
	ASSERT_TRUE(rink.emptyPosition(LD));
}

TEST(TestRink, SuccedToAttackLDWithSuccesfullAttackOfCE) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(LD, defendingCard);
	rink.replacePosition(CE, Card());
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(LD, attackingCard);
	// Verify
	ASSERT_TRUE(rink.emptyPosition(LD));
}

TEST(TestRink, FailToAttackRDWithoutSuccesfullAttackOfRWorCE) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(RD, defendingCard);
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(RD, attackingCard);
	// Verify
	ASSERT_EQ(defendingCard, rink.getPosition(RD));
}

TEST(TestRink, FailToAttackGKWithoutSuccesfullAttackOfForwardAndDefender) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(GK, defendingCard);
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(GK, attackingCard);
	// Verify
	ASSERT_EQ(defendingCard, rink.getPosition(GK));
}

TEST(TestRink, SuccedToAttackGK) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(Two, Spade);
	rink.replacePosition(GK, defendingCard);
	rink.replacePosition(LW, Card());
	rink.replacePosition(LD, Card());
	// Execute
	Card attackingCard = Card(Five, Club);
	rink.attack(GK, attackingCard);
	// Verify
	ASSERT_TRUE(rink.emptyPosition(GK));
}

TEST(TestRink, AttackFirstRowWithEqualValueAndFail) {
	// Initialize
	Rink rink;
	Card defendingCard = Card(King, Heart);
	rink.replacePosition(CE, defendingCard);
	// Execute
	Card attackingCard = defendingCard;
	rink.attack(CE, attackingCard);
	// Verify
	ASSERT_EQ(defendingCard, rink.getPosition(CE));
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
