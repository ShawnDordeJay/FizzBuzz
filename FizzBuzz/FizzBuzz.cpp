

#include "pch.h"
#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	Game *fizzbuzz = Game::getInstance();
	fizzbuzz->FizzBuzz();

	cin.get();
}

