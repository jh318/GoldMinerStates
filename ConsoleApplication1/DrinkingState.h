#pragma once
#pragma once
#include "State.h"

class DrinkingState : public State
{
public:

	static DrinkingState* Get()
	{
		if (instance == nullptr)
		{
			instance = new DrinkingState();
		}

		return instance;
	}

	void Enter(Miner* miner);
	void Update(Miner* miner);
	void Exit(Miner* miner);

private:
	DrinkingState() {}

	static DrinkingState* instance;
};