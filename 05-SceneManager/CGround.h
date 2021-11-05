#pragma once
#include "GameObject.h"
class CGround : public CGameObject
{
public:
	CGround(float w, float h);
	void Render();
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};
