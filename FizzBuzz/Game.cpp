#include "pch.h"
#include "Game.h"
#include <iostream>
#include"Exception3.h"
#include"Exception5.h"
#include"Exception15.h"

using namespace std;

Game::Game()
{
}


Game::~Game()
{
}

Game *Game::INSTANCE = 0;

Game * Game::getInstance()
{
	if (INSTANCE == 0) {
		
		INSTANCE == new Game;
	}

	return INSTANCE;
}

void Game::FizzBuzz()
{

	for (int i = 1; i < 100; i++) {

		try {

			if (i % 3 == 0 && i % 5 == 0) {
				throw(Exception15());
			}
			else if (i % 3 == 0) {
				throw(Exception3());
			}
			else if (i % 5 == 0) {
				throw(Exception5());
			}
			else {
				cout << i << endl;
			}
		}
		catch (Exception15 &ex15) {
			cout << ex15.what() << endl;
		}
		catch (Exception3 &ex3) {
			cout << ex3.what() << endl;
		}
		catch (Exception5 &ex5) {
			cout << ex5.what() << endl;
		}
	}

}
