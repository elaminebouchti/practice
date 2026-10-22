#pragma once

class Grid{
    public:
    Grid(int width, int hight): width_(width), hight_(hight){}

    bool in_bounds(int x, int y) const{
        return (0 < x && x < width_) && (0 < y && y < hight_);
    }

    int width() const{
        return width_;
    }

    int hight() const{
        return hight_;
    }

    private:
    int width_;
    int hight_;

};
