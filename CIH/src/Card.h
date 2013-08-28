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

	Card(int v = 0, Color c = none);
	virtual ~Card();
	int getValue() const;
	int getColor() const;


private:
	int value;
	int color;
};

#endif /* CARD_H_ */
