/*
 * Card.cpp
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#include "Card.h"

Card::Card(int v, Color c) : value(v), color(c) {
	// Empty
}

Card::~Card() {
	// Empty
}

int Card::getValue() const {
	return value;
}

int Card::getColor() const {
	return color;
}
