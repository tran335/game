#pragma once
#include "TileSet.h"
#include "Layer.h"
#include"ObjectMap.h"
class TileMap
{
	static TileMap* __instance;
	vector<LPLAYER> layers;
	TileSet* tileset;
	ObjectMap* objectMap;
	Layer* layer;
	
public:
	void ReadFileTmx(const char* pathTmx, int id, D3DCOLOR transColor, vector<LPGAMEOBJECT>& objects, string prefixPath);
	void RenderBackground();
	static TileMap* GetInstance();
	ObjectMap* GetObjectMap() { return objectMap; }
	void Clear();
};

