#include "Ghost.h"

CGhost::CGhost(float w, float h)
{
	this->width = w;
	this->height = h;

}

void CGhost::Render()
{

}

void CGhost::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = x + width;
	b = y + height;
}
