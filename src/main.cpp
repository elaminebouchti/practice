#include <iostream>
#include "grid.hpp"
#include "vec2.hpp"

int main(){

    Vec2 vector1 = {3,4};
    Vec2 vector2 = {1,1};
    std::cout << "vector1 * vector2 : " << vector1.dot(vector2) << "\n";

    Grid grid(8,10);
    std::cout <<"vector 1 length : " << vector1.lenght() << "\n";
    vector1 * 3;
    std::cout <<"vector1 * 3 : " << "("<<vector1.x << "," << vector1.y <<")\n";
    std::cout <<"vector1 + vector2 : " << "(" << (vector1 + vector2).x << "," << (vector1 + vector2).y <<")\n";
    std::cout << grid.width() <<"\n";
    std::cout << grid.in_bounds(7,9) << "\n";
    std::cout << grid.in_bounds(0,8) << "\n";
    return 0;
}
