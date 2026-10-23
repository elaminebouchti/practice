#include <cmath>
#include "vec2.hpp"

Vec2& Vec2::operator+=(const Vec2& other){
    this->x += other.x;
    this->y += other.y;
    return *this;
}

Vec2 Vec2::operator+(const Vec2& other) const{
    Vec2 result = *this;
    result += other;
    return result;
}

Vec2& Vec2::operator-=(const Vec2& other){
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

Vec2 Vec2::operator-(const Vec2& other) const{
    Vec2 result = *this;
    result -= other;
    return result;
}

Vec2 Vec2::operator*(float other) const{
    Vec2 result = *this;
    result.x *= other;
    result.y *= other;
    return result;
}

float Vec2::dot(const Vec2& b) const{
    return x * b.x + y * b.y;
}

float Vec2::length() const{
    return std::sqrt(x * x + y * y);
}
