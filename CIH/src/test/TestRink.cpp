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
	for (Positions pos = GK; static_cast<int>(pos) < 12; pos++) {
		ASSERT_NE(none, rink.getPosition(pos).getColor());
	}
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
