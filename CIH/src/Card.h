/*
 * Card.h
 *
 *  Created on: Aug 27, 2013
 *      Author: liwid
 */

#ifndef CARD_H_
#define CARD_H_

class Card {
public:
	enum Color {
		none,
		Spade,
		Club,
		Dimond,
		Heart};
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

	Card(Value v = Joker, Color c = none);
	virtual ~Card();
	Value getValue() const;
	Color getColor() const;


private:
	Value value;
	Color color;
};

#endif /* CARD_H_ */
