#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <iostream>

class Handle
{
public:
	Handle();
	void InitGame();
	void ChooseChar();
	void WelcomeMessage();
	void Menu();
	~Handle();
};

#endif