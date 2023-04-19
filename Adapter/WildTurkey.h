#pragma once
#include "Turkey.h"
class WildTurkey :
	public Turkey
{
public:
	void fly() override;
	void gobble() override;
};