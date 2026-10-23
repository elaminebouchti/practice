#pragma once

class Grid{
    public:
    Grid(int width, int height): width_(width), height_(height){}

    bool in_bounds(int x, int y) const;

    int width() const;

    int height() const;

    private:
    int width_;
    int height_;

};
