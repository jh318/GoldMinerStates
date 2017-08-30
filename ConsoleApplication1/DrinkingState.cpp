#include "DrinkingState.h"
#include "MiningState.h"
#include "Miner.h"
#include <iostream>
using namespace std;

DrinkingState* DrinkingState::instance = nullptr;


void DrinkingState::Enter(Miner* miner)
{
	if (miner->currentLocation != Saloon)
	{
		cout << "Goin' to grab a drink!\n";

		miner->currentLocation = Bank;
	}

}

void DrinkingState::Update(Miner* miner)
{
	cout << "I'm having another beer!\n";
	--miner->thirst;

	if (miner->thirst == 0)
	{
		miner->gotoState(MiningState::Get());
	}

}

void DrinkingState::Exit(Miner* miner)
{
}