#pragma once
#include "tinyXML/tinyxml.h"
#include <string>
#include "GameObject.h"
using namespace std;
class ObjectMap
{
	TiXmlElement* objectGroupElement;
	int objectGroupId;
	string name;
public:
	ObjectMap(TiXmlElement* objectGroupElement, vector<LPGAMEOBJECT>& objects);
};

