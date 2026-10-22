#pragma once
#include <cmath>

struct Vec2{
    float x, y;

    Vec2 operator+=(const Vec2& other){
        x += other.x;
        y += other.y;
        return *this;
    }

    Vec2 operator+(const Vec2& other){
        Vec2 result = *this;
        result += other;
        return result;
    }

    Vec2 operator-=(const Vec2& other){
        x -= other.x;
        y -= other.y;
        return *this;
    }

    Vec2 operator-(const Vec2& other){
        Vec2 result = *this;
        result -= other;
        return result;
    }

    Vec2 operator*(const float& other){
        x *= other;
        y *= other;
        return *this;
    }

    float dot(const Vec2& other)const {
        return x * other.x + y * other.y;
    }

    float lenght()const{
        return std::sqrt(x * x + y * y);
    }

};
