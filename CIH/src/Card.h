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

class Card {
public:
	Card(int v = Joker, int c = none);
	virtual ~Card();
	int getValue() const;
	int getColor() const;

private:
	int value;
	int color;
};

bool operator==(const Card& lhs, const Card& rhs);

#endif /* CARD_H_ */
