#include "grid.hpp"

int Grid::height() const{
    return height_;
}

int Grid::width() const{
    return width_;
}

bool Grid::in_bounds(int x, int y) const{
    return (0 <= x && x < width_) && (0 <= y && y < height_);
}
