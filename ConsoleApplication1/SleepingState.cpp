#include "SleepingState.h"
#include "MiningState.h"
#include "Miner.h"
#include <iostream>
using namespace std;

SleepingState* SleepingState::instance = nullptr;


void SleepingState::Enter(Miner* miner)
{
	if (miner->currentLocation != Homestead)
	{
		cout << "I'mma hittin' the hay!\n";

		miner->currentLocation = Homestead;
	}

}

void SleepingState::Update(Miner* miner)
{
	cout << "zzZzzzZzzzZzzZz!\n";
	--miner->fatigue;

	if (miner->fatigue == 0)
	{
		miner->gotoState(MiningState::Get());
	}
}

void SleepingState::Exit(Miner* miner)
{
	cout << "UguugughugughhCoffee!\n";
}