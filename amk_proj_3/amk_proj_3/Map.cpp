#include "stdafx.h"
#include "Map.h"


Map::Map(string& rN, string& tN, string& tS, string& tE, string& tW, string& qD) : quickDesc(qD), roomName(rN), toNorth(tN), toSouth(tS), toEast(tE), toWest(tW)
{
}


Map::~Map()
{
}
