#include "Miner.h"
#include "State.h"


void Miner::gotoState(State* state)
{
	if (currentState != nullptr)
	{
		currentState->Exit(this);
	}

	currentState = state;

	currentState->Enter(this);
}

bool Miner::ArePocketsFull()
{
	return goldInPocket > 10;
}

void Miner::Update()
{
	if (currentState != nullptr)
	{
		currentState->Update(this);
	}
}