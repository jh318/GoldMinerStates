#pragma once
#include "State.h"

class BankingState : public State
{
public:

	static BankingState* Get()
	{
		if (instance == nullptr)
		{
			instance = new BankingState();
		}

		return instance;
	}

	void Enter(Miner* miner);
	void Update(Miner* miner);
	void Exit(Miner* miner);

private:
	BankingState() {}

	static BankingState* instance;
};