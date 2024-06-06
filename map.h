#pragma once

#include <iostream>
#include <vector>

class MapTileProxy {
public:
    MapTileProxy(int centerX, int centerY, int width, int height) : centerX_(centerX), centerY_(centerY), width_(width), height_(height) {}

    int CenterX() const { return centerX_; }
    int CenterY() const { return centerY_; }
    int Width() const { return width_; }
    int Height() const { return height_; }
    void Draw() const {/*Draw logic*/}

private:
    int centerX_;
    int centerY_;
    int width_;
    int height_;
};

class Map {
public:
    Map(int startX, int startY, int tileWidth, int tileHeight, int numTilesX, int numTilesY);

    void Print(bool draw) const;

private:
    std::vector<MapTileProxy> mapTileList_;
};
