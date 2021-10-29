#pragma once
#include "TileSet.h"
#include "Layer.h"
class TileMap
{
	static TileMap* __instance;
	vector<LPLAYER> layers;
	TileSet* tileset;
	Layer* layer;
	
public:
	void ReadFileTmx(const char* pathTmx, int id, D3DCOLOR transColor, string prefixPath);
	void RenderBackground();
	static TileMap* GetInstance();
	//ObjectMap* GetObjectMap() { return objectmap; }
	void Clear();
};

