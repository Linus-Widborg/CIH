/*
 * Card.h
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#ifndef CARD_H_
#define CARD_H_
#include <string>

enum Color {
	none,
	Spade,
	Club,
	Dimond,
	Heart
};
Color& operator++(Color&);
Color operator++(Color&, int);

enum Value {
	zero,
	Ace,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eigth,
	Nine,
	Ten,
	Jack,
	Queen,
	King
};
Value& operator++(Value& value);
Value operator++(Value& value, int);

class Card {
public:
	Card(Value v = zero, Color c = none);
	virtual ~Card();
	Value getValue() const;
	Color getColor() const;
	std::string toString() const;

private:
	Value value;
	Color color;
};

bool operator==(const Card& lhs, const Card& rhs);

#endif /* CARD_H_ */
