/*
 * Card.cpp
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#include "Card.h"

Card::Card(Value v, Color c) : value(v), color(c) {
	// Empty
}

Card::~Card() {
	// Empty
}

Card::Value Card::getValue() const {
	return value;
}

Card::Color Card::getColor() const {
	return color;
}
