#pragma once
#include "GameObject.h"

#define	GHOST_WIDTH 48
#define GHOST_BBOX_WIDTH 48
#define GHOST_BBOX_HEIGHT 48

class CGhost : public CGameObject
{
public:
	CGhost(float w, float h);
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};

