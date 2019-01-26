#pragma once
class Game
{
public:
	
	~Game();
	static Game *getInstance();

	void FizzBuzz();

private:
	Game();
	static Game *INSTANCE;
};

