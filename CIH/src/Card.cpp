/*
 * Card.cpp
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#include "Card.h"
#include <iostream>

Card::Card(Value v, Color c) : value(v), color(c) {
	// Empty
}

Card::~Card() {
	// Empty
}

Value Card::getValue() const {
	return value;
}

Color Card::getColor() const {
	return color;
}

//++Color
Color& operator++(Color& color) {
	if (color == Heart) {
		color = none;
	}
	else {
		color = static_cast<Color>(color + 1);
	}
	return color;
}

//Color++
Color operator++(Color& color, int) {
	Color tmp = color;
	++color;
	return tmp;
}

Value& operator++(Value& value) {
	if (value == King) {
		value = Joker;
	}
	else {
		value = static_cast<Value>(value + 1);
	}
	return value;
}

Value operator++(Value& value, int) {
	Value tmp = value;
	++value;
	return tmp;
}

bool operator==(const Card& lhs, const Card& rhs) {
	return lhs.getValue() == rhs.getValue() && lhs.getColor() == rhs.getColor();
}
