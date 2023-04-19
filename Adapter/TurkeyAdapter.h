#pragma once
#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter :
	public Duck
{
private:
	Turkey* turkey;

public:
	TurkeyAdapter(Turkey* turkey);
	void quack() override;
	void fly() override;
};

