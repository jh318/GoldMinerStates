#include "MiningState.h"
#include "BankingState.h"
#include "DrinkingState.h"
#include "Miner.h"
#include <iostream>
using namespace std;

MiningState* MiningState::instance = nullptr;

void MiningState::Enter(Miner* miner)
{
	if (miner->currentLocation != Mine)
	{
		cout << "Walkin' to the mine!\n";
		miner->currentLocation = Mine;
	}
}

void MiningState::Update(Miner* miner)
{
	miner->goldInPocket += 1;
	miner->fatigue += 1;
	miner->thirst += 1;

	cout << "Pickin' up a nugget.\n";

	if (miner->ArePocketsFull())
	{
		miner->gotoState(BankingState::Get());
	}
	else if (miner->IsThirsty())
	{
		miner->gotoState(DrinkingState::Get());
	}

}

void MiningState::Exit(Miner* miner)
{
	cout << "Leavin' the mine!";
}