#include "BankingState.h"
#include "MiningState.h"
#include "SleepingState.h"
#include "Miner.h"
#include <iostream>
using namespace std;

BankingState* BankingState::instance = nullptr;


void BankingState::Enter(Miner* miner)
{
	if (miner->currentLocation != Bank)
	{
		cout << "Goin' to the bank with my pockets full o' sweet sweet gold!\n";
		
		miner->currentLocation = Bank;
	}

}

void BankingState::Update(Miner* miner)
{
	cout << "Depositing " << miner->goldInPocket << " gold in the bank. Account balance is: " << miner->goldInBank + miner->goldInPocket << "\n";
	miner->goldInBank += miner->goldInPocket;
	miner->goldInPocket = 0;

	if (miner->IsFeelingWealth())
	{
		miner->gotoState(SleepingState::Get());
	}
	else
	{
		miner->gotoState(MiningState::Get());
	}

}

void BankingState::Exit(Miner* miner)
{
	cout << "Leavin' the bank! Consarti!";
}