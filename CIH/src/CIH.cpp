//============================================================================
// Name        : CIH.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Deck.h"
using namespace std;

int main() {
	cout << "Welcome to CIH" << endl;
	Deck deck;
	Card rink[12];
	for (int i = 0; i < 12; i++) {
		rink[i] = deck.getRandomCard();
		//cout << rink[i].getColor() << rink[i].getValue
	}
	return 0;
}
