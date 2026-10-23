#include <iostream>
#include <cassert>
#include "grid.hpp"
#include "vec2.hpp"


int main(){

    Vec2 vector1 = {3,4};
    Vec2 vector2 = {1,1};
    std::cout << "vector1 * vector2 : " << vector1.dot(vector2) << "\n";

    Grid grid(8,10);
    std::cout <<"vector 1 length : " << vector1.length() << "\n";
    Vec2 result = vector1 * 3;
    std::cout <<"vector1 * 3 : " << "("<< result.x << "," << result.y <<")\n";
    std::cout <<"vector1 + vector2 : " << "(" << (vector1 + vector2).x << "," << (vector1 + vector2).y <<")\n";
    assert(grid.in_bounds(7,9));
    assert(grid.in_bounds(0,0));
    assert(grid.in_bounds(5,0));
    return 0;
}
