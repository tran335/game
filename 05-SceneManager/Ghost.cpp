#include "Ghost.h"

CGhost::CGhost(float w, float h)
{
	this->width = w;
	this->height = h;

}

void CGhost::Render()
{
	//RenderBoundingBox();
}

void CGhost::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - GHOST_BBOX_WIDTH / 2;
	t = y - GHOST_BBOX_HEIGHT / 2;
	r = l +	width;
	b = t + height;
}
