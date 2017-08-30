#pragma once
#include "State.h"

class MiningState : public State
{
public:

	static MiningState* Get()
	{
		if (instance == nullptr)
		{
			instance = new MiningState();
		}

		return instance;
	}

	void Enter(Miner* miner);
	void Update(Miner* miner);
	void Exit(Miner* miner);

private:
	MiningState() {}

	static MiningState* instance;
};