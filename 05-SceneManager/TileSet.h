#pragma once
#include "tinyXML/tinyxml.h"
#include "fstream"
#include "Sprites.h"
#include "Utils.h"
class TileSet
{
	string prefixPath;
	TiXmlElement* tileset;
	int textureId;

	int tileWidth;
	int tileHeight;
	int tileCount;
	int columns;
	int rows;
	LPCWSTR pathImage;
public:
	TileSet(TiXmlElement* tileset, int id, string prefixPath);
	void SplitImageToTile();
};

