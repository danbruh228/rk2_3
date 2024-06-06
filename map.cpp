#include "map.h"

Map::Map(int startX, int startY, int width, int height, int numTilesX, int numTilesY) {
    for (int i = -numTilesX / 2; i < numTilesX / 2; ++i) {
        for (int j = -numTilesY / 2; j < numTilesY / 2; ++j) {
            mapTileList_.emplace_back(width / 2 + width * i, height / 2 + height * j, width, height);
        }
    }
}

void Map::Print(bool draw) const {
    for (auto const& mapTile : mapTileList_) {
        std::cout << "----- MapTile -----" << std::endl;
        std::cout << "Center Position       : (" << mapTile.CenterX() << ", " << mapTile.CenterY() << ")" << std::endl;
        std::cout << "Size (Width x Height) : " << mapTile.Width() << "x" << mapTile.Height() << std::endl;
        if (draw) mapTile.Draw();
        std::cout << "-------------------" << std::endl;
    }
}
