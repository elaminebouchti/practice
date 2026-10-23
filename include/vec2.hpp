#pragma once

struct Vec2{
    float x, y;

    Vec2& operator+=(const Vec2& other);

    Vec2 operator+(const Vec2& other) const;

    Vec2& operator-=(const Vec2& other);

    Vec2 operator-(const Vec2& other) const;

    Vec2 operator*(float other)const;

    float dot(const Vec2& other)const;

    float length()const;

};
