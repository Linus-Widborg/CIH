/*
 * Card.cpp
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#include "Card.h"
#include <iostream>
#include <sstream>

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

std::string Card::toString() const {
	std::ostringstream result;
	switch (color) {
		case Spade:
			result << "S";
			break;
		case Club:
			result << "C";
			break;
		case Dimond:
			result << "D";
			break;
		case Heart:
			result << "H";
			break;
		default:
			result << "";
			break;
	}
	switch (value) {
	case zero:
		result << "";
		break;
	case Ace:
		result << "A";
		break;
	case Jack:
		result << "Kn";
		break;
	case Queen:
		result << "Q";
		break;
	case King:
		result << "K";
		break;
	default:
		result << value;
		break;
	}
	return result.str();
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
		value = zero;
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
