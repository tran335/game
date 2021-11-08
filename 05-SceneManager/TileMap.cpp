#include "TileMap.h"
#include "debug.h"

TileMap* TileMap::__instance = NULL;

void TileMap::ReadFileTmx(const char* pathTmx, int id, D3DCOLOR transColor, vector<LPGAMEOBJECT>& objects, string prefixPath)
{

	TiXmlDocument doc(pathTmx);
	
	if (!doc.LoadFile())
	{
		return;
		
	}
	TiXmlElement* root = doc.RootElement(); //map
	TiXmlElement* element = root->FirstChildElement();

	while (element)
	{
		string elementName;
		elementName = element->Value();
		if (elementName.compare("tileset") == 0)
		{
			tileset = new TileSet(element, id, prefixPath);
			
		}
		else if (elementName.compare("layer") == 0)
		{
			Layer* layer = new Layer(element);
			layers.push_back(layer);
			if (layer->GetName().compare("Foreground") == 0)
				foregroundLayer = layer;
		}
		else if (elementName.compare("objectgroup") == 0)
		{
			objectMap = new ObjectMap(element, objects);
		}
		element = element->NextSiblingElement();
	}
}

void TileMap::RenderBackground()
{
	for (size_t i = 0; i < layers.size(); i++)
	{
		if (layers[i]->GetName().compare("Foreground") != 0){
			layers[i]->Render();
		}
	}
}

void TileMap::RenderForeground()
{
	foregroundLayer->Render();
}

TileMap* TileMap::GetInstance()
{
	if (__instance == NULL) __instance = new TileMap();
	return __instance;
}

void TileMap::Clear()
{
	foregroundLayer = NULL;
	tileset = NULL;
	objectMap = NULL;
	for (int i = 0; i < layers.size(); i++) {
		delete layers[i];
	}
	layers.clear();
}
