#include "Vector2D.h"

#include <sstream>
#include <cmath>
#include <iostream>

Vector2D::Vector2D()
{
	Set(0.0f, 0.0f);
}
Vector2D::~Vector2D()
{
	
}

float Vector2D::GetX() const
{
	return m_x;
}

float Vector2D::GetY() const
{
	return m_y;
}

void Vector2D::SetX(const float x = 0.0f)
{
	m_x = x;
}

void Vector2D::SetY(const float y= 0.0f)
{
	m_y = y;
}

void Vector2D::Set(const float x = 0.0f, const float y = 0.0f)
{
	SetX(x);
	SetY(y);
}


std::string Vector2D::ToString() const
{
	std::string output_string;
	output_string += "(" + std::to_string(GetX()) + "," + std::to_string(GetY()) + ")\n";
	return output_string;
}
