#pragma once
#include "GameObject.h"
class CGhost : public CGameObject
{
public:
	CGhost(float w, float h);
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};

