#pragma once
#include "Base.h"
class Monigote :
    public Base
{

public:
	Monigote();
	Monigote(int px, int py);
	~Monigote();
	void Mover(Graphics^ g);
};

