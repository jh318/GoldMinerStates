#pragma once

class Miner;

class State
{
public:
	virtual ~State() {};
	virtual void Enter(Miner* miner) = 0;
	virtual void Update(Miner* miner) = 0;
	virtual void Exit(Miner* miner) = 0;
};