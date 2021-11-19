#pragma once
#include "GameObject.h"
#define	GROUND_WIDTH 48
#define GROUND_BBOX_WIDTH 48
#define GROUND_BBOX_HEIGHT 48
class CGround : public CGameObject
{
public:
	CGround(float w, float h);
	void Render();
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};
