/*
 * Card.h
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#ifndef CARD_H_
#define CARD_H_

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
	Joker,
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
	Card(Value v = Joker, Color c = none);
	virtual ~Card();
	Value getValue() const;
	Color getColor() const;

private:
	Value value;
	Color color;
};

bool operator==(const Card& lhs, const Card& rhs);

#endif /* CARD_H_ */
