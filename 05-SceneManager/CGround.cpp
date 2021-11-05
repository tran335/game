#include "CGround.h"
#include "Utils.h"
#include "GameObject.h"
void CGround::Render()
{
	//RenderBoundingBox();
}

CGround::CGround(float w, float h)
{
	this->width = w;
	this->height = h;
}

void CGround::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = x + width;
	b = y + height;
}