#pragma once
#include "Part.h"

class Head : public Part
{

protected:
	void Update() override;


private:
	int2 PrevPosition = { 0, 0 };
};

