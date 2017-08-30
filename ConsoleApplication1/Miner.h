#pragma once

class State;

enum Location
{
	Mine,
	Saloon,
	Bank,
	Homestead,
};

class Miner
{
public:
	State* currentState;
	Location currentLocation{ Homestead};

	int goldInPocket{ 0 };
	int goldInBank{ 0 };
	int thirst{ 0 };
	int fatigue{ 0 };

	void gotoState(State* target);
	bool ArePocketsFull();
	bool IsThirsty() { return thirst > 7;  }
	bool IsFeelingWealth() { return goldInBank > 20; }

	void Update();
	};