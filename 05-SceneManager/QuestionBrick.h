#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ID_ANI_QUESTION_BRICK 70000
#define QUESTION_BRICK_WIDTH 48
#define QUESTION_BRICK_BBOX_WIDTH 48
#define QUESTION_BRICK_BBOX_HEIGHT 48
class CQuestionBrick : public CGameObject
{
public:
	CQuestionBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

