#include "ObjectMap.h"
#include "CGround.h"
#include "Ghost.h"
#include "debug.h"
#include "Coin.h"
#include "Brick.h"
#include "QuestionBrick.h"

void GetInfoElement(TiXmlElement* element, int& objectId, float& x, float& y, float& width, float& height) {
	element->QueryIntAttribute("id", &objectId);
	element->QueryFloatAttribute("x", &x);
	element->QueryFloatAttribute("y", &y);
	element->QueryFloatAttribute("width", &width);
	element->QueryFloatAttribute("height", &height);
}
ObjectMap::ObjectMap(TiXmlElement* objectGroupElement, vector<LPGAMEOBJECT>& objects)
{
	objectGroupElement->QueryIntAttribute("id", &objectGroupId);
	name = objectGroupElement->Attribute("name");
	CGameObject* obj = NULL;
	int objectId;
	float x, y;
	float width, height;
	TiXmlElement* element = objectGroupElement->FirstChildElement();
	if (name.compare("Solid") == 0)
	{
		while (element)
		{
			GetInfoElement(element, objectId, x, y, width, height);
			obj = new CGround(width, height);
			obj->SetPosition(x, y);
			objects.push_back(obj);
			element = element->NextSiblingElement();
		}
	}
	else if (name.compare("Ghost") == 0)
	{
		while (element)
		{
			GetInfoElement(element, objectId, x, y, width, height);
			obj = new CGhost(width, height);
			obj->SetPosition(x, y);
			objects.push_back(obj);
			element = element->NextSiblingElement();
		}
	}
	else if (name.compare("Coin") == 0)
	{
		while (element)
		{
			GetInfoElement(element, objectId, x, y, width, height);
			obj = new CCoin(width, height);
			obj->SetPosition(x, y);
			objects.push_back(obj);
			element = element->NextSiblingElement();
		}
	}
	else if (name.compare("Brick") == 0)
	{
		while (element)
		{
			GetInfoElement(element, objectId, x, y, width, height);
			obj = new CBrick(width, height);
			obj->SetPosition(x, y);
			objects.push_back(obj);
			element = element->NextSiblingElement();
		}
	}
	else if (name.compare("QuestionBlocks") == 0)
	{
		while (element)
		{
			string typeName;
			int type;
			GetInfoElement(element, objectId, x, y, width, height);
			typeName = element->Attribute("name");
			element->QueryIntAttribute("type", &type);
			obj = new CQuestionBrick(width, height);
			obj->SetPosition(x, y);
			objects.push_back(obj);
			element = element->NextSiblingElement();
		}
	}

}

