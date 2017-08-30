#pragma once
#include "State.h"


class SleepingState : public State
{
public:

	static SleepingState* Get()
	{
		if (instance == nullptr)
		{
			instance = new SleepingState();
		}

		return instance;
	}

	void Enter(Miner* miner);
	void Update(Miner* miner);
	void Exit(Miner* miner);

private:
	SleepingState() {}

	static SleepingState* instance;
};