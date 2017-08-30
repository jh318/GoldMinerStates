#include "Miner.h"
#include "MiningState.h"
#include <windows.h>

int main() 
{
	Miner miner;
	miner.gotoState(MiningState::Get());

	for (int i = 0; i < 200; ++i)
	{
		miner.Update();
		Sleep(500);
	}
}